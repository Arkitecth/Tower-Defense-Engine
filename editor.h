#ifndef __EDITOR__H__
#define __EDITOR__H__
#include "Container.h"
#include "DropdownWidget.h"
#include <vector>

struct Editor 
{
    bool isActive{}; 
    std::vector<Container> containers{}; 
    Editor(); 
    void loadLevel(); 
    void addLevel(); 
    void draw(); 
}; 


#endif
