#pragma once

#include <vector>

class IUIElement
{
	friend class Window;
public:
	IUIElement(IUIElement* parent = nullptr);

	virtual void AddChild(IUIElement*);
	virtual void RemoveChild(IUIElement*);
	
	int width;
	int height;

protected:
	virtual void Render();

	IUIElement* parent;
	std::vector<IUIElement*> children;
};