#ifndef __DROPDOWN_WIDGET__H__
#define __DROPDOWN_WIDGET__H__
#include "Levels.h"
#include "raylib.h"
#include <vector>

struct LevelDropdownWidget { 
    bool isActive{}; 
    int selectedItem{}; 
    Vector2 position; 
    LevelDropdownWidget(); 
    LevelDropdownWidget(Vector2 new_position); 
    std::vector<Level> levels{}; 
    void addToDropdown(Level level); 
    void drawLevel(); 
    void draw(); 
}; 



#endif
