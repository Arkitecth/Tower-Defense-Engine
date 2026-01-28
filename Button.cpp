#include "Button.h"
#include "raylib.h"
#include "raygui.h"
#include "iostream"


Button::Button()
{
    text = ""; 
    type = button_type; 
    tag = ""; 
    position = Vector2{0,0};
}

Button::Button(std::string new_text, std::string new_tag, Vector2 new_position, int new_width, int new_height)
{
    text = new_text; 
    tag = new_tag; 
    position = new_position; 
    width = new_width; 
    height = new_height; 
    type = button_type; 
}

void Button::draw()
{
    Rectangle bound = {position.x, position.y, float(width), float(height)}; 
    int result = GuiButton(bound, text.c_str());
    if (result == 1) 
    {
    }

}
