#include "Editor.h"
#include "LoadLevelButton.h"
#include "raylib.h"
#include <string>

Editor::Editor()
{
    button = LoadLevelButton{"Add Level", Vector2{100, 100}, 150,  30}; 
    dropdownWidget = LevelDropdownWidget(Vector2{300, 80}); 
    dropdownWidget.levels = levels;
    fileName = ""; 
}


void Editor::update()
{
    button.update(); 
    if (fileName != button.fileNameToLoad) {
	texture = LoadTexture(button.fileNameToLoad); 
	Level level{"Level N", button.fileNameToLoad, texture};
	levels.push_back(level); 
	fileName = button.fileNameToLoad; 
	dropdownWidget.addToDropdown(level);
    }

}

void Editor::draw()
{
    dropdownWidget.drawLevel(); 
    button.draw(); 
    dropdownWidget.draw(); 
}
