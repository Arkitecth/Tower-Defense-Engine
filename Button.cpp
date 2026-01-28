#include "Button.h"
#include "raylib.h"
#include "raygui.h"


Button::Button()
{
    text = ""; 
    type = button_type; 
    position = Vector2{0,0};
}

Button::Button(std::string new_text, Vector2 new_position, int new_width, int new_height)
{
    text = new_text; 
    position = new_position; 
    width = new_width; 
    height = new_height; 
    type = button_type; 
}

void Button::draw()
{
    Rectangle bound = {position.x, position.y, float(width), float(height)}; 
    GuiButton(bound, text.c_str());
}
