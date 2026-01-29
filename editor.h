#ifndef __EDITOR__H__
#define __EDITOR__H__
#include "LoadLevelButton.h"
#include <vector>
struct Editor 
{
    bool isActive{}; 
    LoadLevelButton button; 
    Editor(); 
    void loadLevel(); 
    void addLevel(); 
    void draw(); 
    void update(); 
}; 


#endif
