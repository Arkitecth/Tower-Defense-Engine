#ifndef __BUTTON__H__
#define __BUTTON__H__

#include "Widget.h"
const std::string button_type = "button"; 
struct Button : public Widget
{
    std::string text; 
    int width; 
    int height; 
    Button(); 
    Button(std::string new_text, std::string tag, Vector2 new_position, int new_width, int new_height); 
    void draw(); 
}; 

#endif
