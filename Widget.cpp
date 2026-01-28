#include "Widget.h"

Widget::Widget()
{
    position = Vector2{}; 
    type = undefined_widget; 
    tag = ""; 
}

Widget::Widget(Vector2 new_position, std::string new_type, std::string new_tag)
{
    position = new_position; 
    type = new_type; 
    tag = new_tag;

}

void Widget::draw()
{

}




