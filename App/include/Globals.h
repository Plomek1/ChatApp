#pragma once

struct ImVec2;

class Globals
{
public:
	static const ImVec2& GetScreenSize();
private:
	friend class Window;
	static void SetScreenSize(ImVec2 size);
};