#include "editor.h"
#include "dropdownWidget.h"
void Editor::loadLevel()
{
}

Editor::Editor()
{
    DropdownWidget widget{Vector2{150, 100}}; 
    m_widget = widget; 
}


void Editor::addLevel()
{

}


void Editor::draw()
{
    m_widget.draw(); 
}
