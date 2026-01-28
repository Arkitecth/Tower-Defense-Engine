#include "Container.h"
#include "DropdownWidget.h"
#include "raylib.h"
#include "Editor.h"

void Editor::loadLevel()
{
}

Editor::Editor()
{
    DropdownWidget widget{Vector2{150, 100}}; 
    Container menu{100, float(GetScreenHeight()), Vector2{0, 0}, BLANK}; 
    menu.addWidgetToContainer(&widget); 
    containers.push_back(menu); 
}


void Editor::addLevel()
{

}


void Editor::draw()
{
    containers[0].draw(); 
}
