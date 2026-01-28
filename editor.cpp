#include "Button.h"
#include "Container.h"
#include "DropdownWidget.h"
#include "raylib.h"
#include "Editor.h"

void Editor::loadLevel()
{
}

Editor::Editor()
{
    LevelDropdownWidget* widget = new LevelDropdownWidget{Vector2{150, 100}}; 
    Button* button = new Button{"Button 1", "add_level", Vector2{100, 100}, 75, 75}; 
    Container menu{100, float(GetScreenHeight()), Vector2{0, 0}, BLANK}; 
    menu.addWidgetToContainer(widget); 
    menu.addWidgetToContainer(button); 
    containers.push_back(menu); 
}


void Editor::addLevel()
{
    // const Button* button = dynamic_cast<const Button*>(containers[0].getWidgetFromContainer("add_level")); 
    // const DropdownWidget* dropdown= dynamic_cast<const DropdownWidget*>(containers[0].getWidgetFromContainer("")); 
}


void Editor::draw()
{
    containers[0].draw(); 
}
