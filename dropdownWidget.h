#ifndef __DROPDOWN_WIDGET__H__
#define __DROPDOWN_WIDGET__H__
#include "raylib.h"
#include <vector>

struct DropdownWidget
{
    Vector2 m_position{}; 
    bool isActive{}; 
    int selectedItem{}; 
    DropdownWidget(); 
    DropdownWidget(Vector2 new_position); 
    void draw(); 
}; 



#endif
