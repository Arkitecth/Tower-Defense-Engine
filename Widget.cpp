#include "Widget.h"

Widget::Widget()
{
    position = Vector2{}; 
    type = undefined_widget; 
}

Widget::Widget(Vector2 new_position, std::string new_type)
{
    position = new_position; 
    type = new_type; 

}

void Widget::draw()
{}

