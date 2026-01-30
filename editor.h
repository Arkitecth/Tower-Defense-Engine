#ifndef __EDITOR__H__
#define __EDITOR__H__
#include "Levels.h"
#include "LoadLevelButton.h"
#include "DropdownWidget.h"
#include "raylib.h"
#include <vector>
struct Editor 
{
    bool isActive{}; 
    std::string fileName; 
    LoadLevelButton button; 
    LevelDropdownWidget dropdownWidget; 
    Texture2D texture; 
    std::vector<Level> levels; 
    Editor(); 
    void draw(); 
    void update(); 
}; 


#endif
