#pragma once
#include <Windows.h>


class ConsoleConfig
{
private:
	HANDLE m_hStdout { GetStdHandle(STD_OUTPUT_HANDLE) };
	HWND m_hWnd{ GetConsoleWindow() };
	RECT m_rect;

	COORD m_coord {};
	CONSOLE_CURSOR_INFO m_curInfo{};
	const bool m_curShow{ true };

public:
	ConsoleConfig() = default;
	ConsoleConfig(const ConsoleConfig&) = delete;
	ConsoleConfig& operator=(const ConsoleConfig&) = delete;

	void SetCursorToStart();
	void CursorVisibility(bool Visible);

	void SetConsolePos(int posX, int posY, int height, int width);

	void SleepCon(int l);
};