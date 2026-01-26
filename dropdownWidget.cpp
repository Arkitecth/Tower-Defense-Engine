#include "dropdownWidget.h"
#include "raygui.h"
#include "raylib.h"
#include <iostream>
#include <vector>


DropdownWidget::DropdownWidget(Vector2 new_position)
{
	m_position = new_position;
	isActive = false; 
	selectedItem = 0; 
}

DropdownWidget::DropdownWidget()
{
    m_position = Vector2{0, 0};
    isActive = false;
    selectedItem = 0;
}

void DropdownWidget::draw()
{
    int* selectedIndex = &selectedItem; 
    Rectangle bounds{m_position.x, m_position.y, 100, 30}; 
    int result = GuiDropdownBox(bounds, "Levels;Second;Three;Four;Five", selectedIndex, isActive);
    if (result == 1) {
	isActive = !isActive;
    }
}

