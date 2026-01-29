#include "Editor.h"
#include "LoadLevelButton.h"
#include "raylib.h"
#include <string>

void Editor::loadLevel()
{
}

Editor::Editor()
{
    button = LoadLevelButton{"Add Level", Vector2{100, 100}, 150,  75}; 
}

void Editor::addLevel()
{

}
void Editor::update()
{
    button.update(); 
}

void Editor::draw()
{
    if (button.fileNameToLoad[0] != 0) {
	Texture2D texture = LoadTexture(button.fileNameToLoad); 
	Rectangle src{0, 0, float(texture.width), float(texture.height)};  
	Rectangle dst{0, 0, float(GetScreenWidth()), float(GetScreenHeight())};
	DrawTexturePro(texture, src, dst, Vector2{0,0}, 0, RAYWHITE); 
    }
    button.draw(); 
    
}
