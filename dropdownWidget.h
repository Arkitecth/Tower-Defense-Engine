#ifndef __DROPDOWN_WIDGET__H__
#define __DROPDOWN_WIDGET__H__
#include "Levels.h"
#include "Widget.h"
#include "raylib.h"
#include <vector>

struct LevelDropdownWidget: public Widget
{
    bool isActive{}; 
    int selectedItem{}; 
    LevelDropdownWidget(); 
    LevelDropdownWidget(Vector2 new_position); 
    std::vector<Level> levels{}; 
    void addToDropdown(Level level); 
    void draw(); 
}; 



#endif
