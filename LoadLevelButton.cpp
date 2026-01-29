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
	fileDialogState.windowActive = true; 
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

