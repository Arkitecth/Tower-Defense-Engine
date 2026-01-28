#ifndef __WIDGET__H__
#define __WIDGET__H__
#include "raylib.h"
#include <string>
const std::string undefined_widget = "undefined-widget"; 
struct Widget
{
    Vector2 position; 
    float width; 
    float height; 
    std::string type; 
    std::string tag; 
    Widget(); 
    virtual void draw() = 0; 
}; 



#endif

