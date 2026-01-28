#include "Container.h"
#include "Widget.h"
#include "raylib.h"

Container::Container()
{
    width = 0; 
    height = 0; 
    position = Vector2{}; 
    color = BLACK; 
}


Container::Container(float new_width, float new_height, Vector2 new_position, Color new_color)
{
    width = new_width; 
    height = new_height; 
    position = new_position; 
    color = new_color; 
}


void Container::draw()
{
    DrawRectangle(position.x, position.y, width, height, color); 
}


void Container::addWidgetToContainer(Widget* widget)
{
    widgets.push_back(widget); 
}


