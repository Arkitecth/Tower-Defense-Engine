#include "Editor.h"
#include "LoadLevelButton.h"
#include "raylib.h"
#include <string>

void Editor::loadLevel()
{
}

Editor::Editor()
{
    button = LoadLevelButton{"Add Level", Vector2{100, 100}, 150,  30}; 
    dropdownWidget = LevelDropdownWidget(Vector2{150, 150}); 
    dropdownWidget.levels = levels;
    fileName = ""; 
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
	if (fileName != button.fileNameToLoad) {
	    texture = LoadTexture(button.fileNameToLoad); 
	    Level level{"Level 1", button.fileNameToLoad, texture};
	    levels.push_back(level); 
	    fileName = button.fileNameToLoad; 
	    dropdownWidget.addToDropdown(level);
	}
	Rectangle src{0, 0, float(texture.width), float(texture.height)};  
	Rectangle dst{0, 0, float(GetScreenWidth()), float(GetScreenHeight())};
	DrawTexturePro(texture, src, dst, Vector2{0,0}, 0, RAYWHITE); 
    }
    dropdownWidget.drawLevel(); 
    button.draw(); 
    dropdownWidget.draw(); 
}
