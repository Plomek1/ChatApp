#pragma once

#include <vector>
#include <functional>
#include <memory>

class IUIElement;

class Window
{
	friend class App;
public:
	Window();
	~Window();

	void AddUICallback(IUIElement*);
	void RemoveUICallback(IUIElement*);
private:
	int InitializeImGui();
	int StartDrawLoop();
	void Cleanup();

	void DrawUI();

	std::vector<IUIElement*> uiCallbacks;
};

