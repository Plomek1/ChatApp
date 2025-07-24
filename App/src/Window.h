#pragma once

#include <vector>
#include <functional>

class IUIElement;

class Window
{
	friend class App;
public:
	void AddUICallback(IUIElement*);
	void RemoveUICallback(IUIElement*);
private:
	int DrawWindow();
	void DrawUI();

	std::vector<IUIElement*> uiCallbacks;
};

