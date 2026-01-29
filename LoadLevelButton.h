#ifndef __LOAD_LEVEL_BUTTON__H__
#define __LOAD_LEVEL_BUTTON__H__
#include "FileDialog.h"
#include "raylib.h"
#include "string"

const std::string widget_type = "button"; 
struct LoadLevelButton 
{
    std::string text; 
    Vector2 position; 
    float width; 
    float height; 
    char fileNameToLoad[256] {0}; 
    GuiWindowFileDialogState fileDialogState;
    LoadLevelButton(); 
    LoadLevelButton(std::string new_text,Vector2 new_position, int new_width, int new_height); 
    void draw(); 
    void update(); 

}; 

#endif
