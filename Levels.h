#ifndef __LEVELS__H__
#define __LEVELS__H__
#include "raylib.h"
#include <string>
struct Level 
{
    std::string name; 
    std::string filePath;
    Texture2D texture; 
    Level(); 
    Level(std::string new_name, std::string new_filepath, Texture2D new_texture); 
    void setName(std::string new_name); 
    void setFilePath(std::string new_filepath); 
    void setTexture(Texture2D new_texture); 
}; 


#endif
