#ifndef __CONTAINER__H__
#define __CONTAINER__H__
#include "raylib.h"
#include "Widget.h"
#include "vector"
struct Container 
{
    //Container should have a collection of widgets to display relative to the containers width and height
    float width; 
    float height; 
    Vector2 position; 
    Color color; 
    std::vector<Widget*> widgets{}; 

    Container(); 
    Container(float new_width, float new_height, Vector2 new_position, Color new_color); 
    void draw(); 
    void addWidgetToContainer(Widget* widget); 
}; 

#endif
