#include "raygui.h"
#include "raylib.h"
#define RAYGUI_IMPLEMENTATION
#define GUI_WINDOW_FILE_DIALOG_IMPLEMENTATION
#include "editor.h"
#include "fileDialog.h"

int main() 
{
	int screenWidth = 800;
	int screenHeight = 560;
	SetConfigFlags(FLAG_WINDOW_HIGHDPI); 
	InitWindow(screenWidth, screenHeight, "Tower Defense");
	SetExitKey(0);

	Editor editor{}; 
	GuiWindowFileDialogState fileDialogState = InitGuiWindowFileDialog(GetWorkingDirectory());

	//UI and Functionality

	bool exitWindow = false;

	char fileNameToLoad[512] = { 0 };

	Texture texture = { 0 };

	SetTargetFPS(60);

	GuiSetStyle(DEFAULT, TEXT_SIZE, 13); 
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!exitWindow)    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		exitWindow = WindowShouldClose();

		if (fileDialogState.SelectFilePressed)
		{
		    // Load image file (if supported extension)
		    if (IsFileExtension(fileDialogState.fileNameText, ".png"))
		    {
			strcpy(fileNameToLoad, TextFormat("%s" PATH_SEPERATOR "%s", fileDialogState.dirPathText, fileDialogState.fileNameText));
			UnloadTexture(texture);
			texture = LoadTexture(fileNameToLoad);
		    }

		    fileDialogState.SelectFilePressed = false;
		}

		editor.loadLevel();
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		    ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));
		    Rectangle src{0, 0, float(texture.width), float(texture.height)};  
		    Rectangle dst{0, 0, float(GetScreenWidth()), float(GetScreenHeight())};
		    DrawTexturePro(texture, src, dst, Vector2{0,0}, 0, RAYWHITE); 

		    // raygui: controls drawing
		    //----------------------------------------------------------------------------------
		    if (fileDialogState.windowActive) GuiLock();


		    if (GuiButton((Rectangle){20, 20, 140, 30 }, GuiIconText(ICON_FILE_OPEN, "Open Image"))) fileDialogState.windowActive = true;

		    GuiUnlock();

		    // GUI: Dialog Window
		    //--------------------------------------------------------------------------------
		    GuiWindowFileDialog(&fileDialogState);
		    //--------------------------------------------------------------------------------

		    //----------------------------------------------------------------------------------
		    editor.draw(); 

		EndDrawing();
		//----------------------------------------------------------------------------------
	    }

	    // De-Initialization
	    //--------------------------------------------------------------------------------------
	    UnloadTexture(texture);     // Unload texture

	    CloseWindow();              // Close window and OpenGL context
	    //--------------------------------------------------------------------------------------

    return 0;



}




