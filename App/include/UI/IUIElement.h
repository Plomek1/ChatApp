#pragma once

#include <vector>

struct ImGuiStyle;

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
	virtual void LoadStyle();
	virtual void UnloadStyle();

	IUIElement* parent;
	std::vector<IUIElement*> children;
};