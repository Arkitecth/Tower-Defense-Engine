#include "Levels.h"

Level::Level()
{
    name = ""; 
    filePath = ""; 
}


Level::Level(std::string new_name, std::string new_filepath)
{
    name = new_name; 
    filePath = new_filepath; 
}


void Level::setFilePath(std::string new_filepath)
{
    filePath = new_filepath; 
}


void Level::setName(std::string new_name)
{
    name = new_name; 
}
