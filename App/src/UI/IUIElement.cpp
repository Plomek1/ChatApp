#include "IUIElement.h"

#include "Logger.h"

IUIElement::IUIElement(IUIElement* parent) : parent(parent), width(0), height(0)
{
	if (this->parent)
        this->parent->AddChild(this);
}

void IUIElement::AddChild(IUIElement* uiElement)
{
    auto it = std::find(children.begin(), children.end(), uiElement);
    if (it != children.end())
    {
        LOG_WARN("Attempted to add the same UIElement child more than once!");
        return;
    }
    children.push_back(uiElement);
}

void IUIElement::RemoveChild(IUIElement* uiElement)
{
    auto it = std::find(children.begin(), children.end(), uiElement);
    if (it == children.end())
    {
        LOG_WARN("Attempted to remove UIElement child that doesn't exist!");
        return;
    }
    children.erase(it);
}

void IUIElement::Render()
{
    for (size_t i = 0; i < children.size(); i++)
        children[i]->Render();
}
