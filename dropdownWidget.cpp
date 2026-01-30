#include "DropdownWidget.h"
#include "Levels.h"
#include "raygui.h"
#include "raylib.h"

LevelDropdownWidget::LevelDropdownWidget(Vector2 new_position) 
{
	position = new_position; 
	isActive = false; 
	selectedItem = 0; 
}

LevelDropdownWidget::LevelDropdownWidget()
{
    position = Vector2{0, 0};
    isActive = false;
    selectedItem = 0;
}

void LevelDropdownWidget::draw()
{
    int* selectedIndex = &selectedItem; 
    std::string levelString = default_label; 
    if (levels.size() != 0) {
	levelString = ""; // Clear Default Label With Actual Level Value
    }

    for(int i = 0; i < levels.size(); i++)
    {
	if (levelString != default_label) 
	{
	    levelString += levels[i].name + ";";
	}
    }

    if(levelString[levelString.size() - 1] == ';')
    {
	levelString.pop_back(); 
    }

    Rectangle bounds{position.x, position.y, 200, 30}; 
    int result = GuiDropdownBox(bounds, levelString.c_str(), selectedIndex, isActive);
    if (result == 1) {
	isActive = !isActive;
    }
}

void LevelDropdownWidget::drawLevel()
{
    if (levels.size() != 0) {
	levels[selectedItem].draw(); 
    }
}


void LevelDropdownWidget::addToDropdown(Level level)
{
    levels.push_back(level); 
}


