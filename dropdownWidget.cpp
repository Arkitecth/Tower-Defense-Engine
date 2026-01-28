#include "DropdownWidget.h"
#include "raygui.h"
#include "raylib.h"

DropdownWidget::DropdownWidget(Vector2 new_position, std::string new_tag)
{
	position = new_position; 
	tag = new_tag; 
	isActive = false; 
	selectedItem = 0; 
	type = "dropdown"; 
}

DropdownWidget::DropdownWidget()
{
    position = Vector2{0, 0};
    isActive = false;
    selectedItem = 0;
    type = "dropdown"; 
}

void DropdownWidget::draw()
{
    int* selectedIndex = &selectedItem; 
    Rectangle bounds{position.x, position.y, 100, 30}; 
    int result = GuiDropdownBox(bounds, "Levels;Second;Three;Four;Five", selectedIndex, isActive);
    if (result == 1) {
	isActive = !isActive;
    }
}

