#ifndef __EDITOR__H__
#define __EDITOR__H__
#include "LoadLevelButton.h"
#include "raylib.h"
#include <vector>
struct Editor 
{
    bool isActive{}; 
    std::string fileName; 
    LoadLevelButton button; 
    Texture2D texture; 
    Editor(); 
    void loadLevel(); 
    void addLevel(); 
    void draw(); 
    void update(); 
}; 


#endif
