#include "raylib.h"
#include "raygui.h"
#include "Editor.h"

int main() 
{
	int screenWidth = 800;
	int screenHeight = 560;
	SetConfigFlags(FLAG_WINDOW_HIGHDPI); 
	InitWindow(screenWidth, screenHeight, "Tower Defense");
	SetExitKey(0);
	Editor editor{}; 
	SetTargetFPS(60);

	GuiSetStyle(DEFAULT, TEXT_SIZE, 13); 

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
	
		editor.update(); 
		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		    ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));
		    // raygui: controls drawing
		    //----------------------------------------------------------------------------------
		    editor.draw(); 

		EndDrawing();
		//----------------------------------------------------------------------------------
	    }


	    CloseWindow();              // Close window and OpenGL context
	    //--------------------------------------------------------------------------------------

    return 0;



}




