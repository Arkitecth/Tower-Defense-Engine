#ifndef __LEVELS__H__
#define __LEVELS__H__

#include <string>
struct Level 
{
    std::string name; 
    std::string filePath;
    Level(); 
    Level(std::string new_name, std::string new_filepath); 
    void setName(std::string new_name); 
    void setFilePath(std::string new_filepath); 
}; 


#endif
