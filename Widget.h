#ifndef __WIDGET__H__
#define __WIDGET__H__
#include "raylib.h"
#include <string>
const std::string undefined_widget = "undefined-widget"; 
struct Widget
{
    Vector2 position; 
    std::string type; 
    std::string tag; 
    Widget(); 
    Widget(Vector2 new_position, std::string new_type, std::string new_tag); 
    virtual void draw() = 0; 
}; 



#endif

