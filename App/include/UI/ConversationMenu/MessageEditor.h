#pragma once

#include "UI/IUIElement.h"

class MessageEditor : public IUIElement
{
private:
	void Render() override;
	void LoadStyle() override;
	void UnloadStyle() override;

	char messageBuffer[256];
};