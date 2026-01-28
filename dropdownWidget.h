#ifndef __DROPDOWN_WIDGET__H__
#define __DROPDOWN_WIDGET__H__
#include "Widget.h"
#include "raylib.h"
#include <vector>

struct DropdownWidget: public Widget
{
    bool isActive{}; 
    int selectedItem{}; 
    DropdownWidget(); 
    DropdownWidget(Vector2 new_position); 
    void draw(); 
}; 



#endif
