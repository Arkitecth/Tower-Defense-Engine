#include "raylib.h"
#include <iostream>
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#undef RAYGUI_IMPLEMENTATION
#define GUI_WINDOW_FILE_DIALOG_IMPLEMENTATION
#include "LoadLevelButton.h"

LoadLevelButton::LoadLevelButton()
{
    text = ""; 
    width = 0; 
    height = 0; 
    position = Vector2{0,0};
}

LoadLevelButton::LoadLevelButton(std::string new_text, Vector2 new_position, int new_width, int new_height)
{
    fileDialogState = InitGuiWindowFileDialog(GetWorkingDirectory());
    text = new_text; 
    position = new_position; 
    width = new_width; 
    height = new_height; 
}

void LoadLevelButton::draw()
{
    Rectangle bound = {position.x, position.y, float(width), float(height)}; 
    int result = GuiButton(bound, GuiIconText(ICON_FILE_OPEN, text.c_str()));
    if (result == 1) 
    {
	isTextBoxActive = true;
    }
    if (isTextBoxActive) 
    {
	Rectangle bound = {position.x, position.y, float(width), float(height)}; 
	Rectangle inputBox = {position.x, position.y, 300, 300};
	bool* p_secretView = nullptr;
	int result = GuiTextInputBox(inputBox, "Level Name", "Enter Level Name", "Save;Cancel", levelsName, 20, p_secretView); 
	if(result == 2)
	{
	    isTextBoxActive = false;
	} 
	else if (result == 1) 
	{
	    std::cout << "Save Button was clicked" << '\n';
	    isTextBoxActive = false;
	    fileDialogState.windowActive = true;
	}
	else if (result == 0) {
	    isTextBoxActive = false;
	}
    }
	GuiWindowFileDialog(&fileDialogState);
}

void LoadLevelButton::update()
{
    if (fileDialogState.SelectFilePressed)
    {
	// Load image file (if supported extension)
	if (IsFileExtension(fileDialogState.fileNameText, ".png"))
	{
	    strcpy(fileNameToLoad, TextFormat("%s" PATH_SEPERATOR "%s", fileDialogState.dirPathText, fileDialogState.fileNameText));
	}
	    fileDialogState.SelectFilePressed = false;
    }
}

