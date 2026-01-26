#ifndef __EDITOR__H__
#define __EDITOR__H__
#include "dropdownWidget.h"

struct Editor 
{
    bool isActive{}; 
    DropdownWidget m_widget; 
    Editor(); 
    void loadLevel(); 
    void addLevel(); 
    void draw(); 
}; 


#endif
