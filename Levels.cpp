#include "Levels.h"
#include "raylib.h"

Level::Level()
{
    name = ""; 
    filePath = ""; 
    texture = Texture2D{};
}

Level::Level(std::string new_name, std::string new_filepath, Texture2D new_texture)
{
    name = new_name; 
    filePath = new_filepath; 
    texture = new_texture; 
}


void Level::setFilePath(std::string new_filepath)
{
    filePath = new_filepath; 
}


void Level::setName(std::string new_name)
{
    name = new_name; 
}

void Level::setTexture(Texture2D new_texture)
{
    texture = new_texture; 
}


void Level::draw()
{
	Rectangle src{0, 0, float(texture.width), float(texture.height)};  
	Rectangle dst{0, 0, float(GetScreenWidth()), float(GetScreenHeight())};
	DrawTexturePro(texture, src, dst, Vector2{0,0}, 0, RAYWHITE); 
}
