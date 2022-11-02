#include "ConsoleConfig.h"

void ConsoleConfig::SetCursorToStart()
{
	m_coord.X = 0;
	m_coord.Y = 0;
	SetConsoleCursorPosition(m_hStdout, m_coord);
}

void ConsoleConfig::CursorVisibility(bool Visible)
{
	
	GetConsoleCursorInfo(m_hStdout, &m_curInfo);
	if (!Visible)
	{
		m_curInfo.bVisible = !m_curShow; //dont show the cursor
	}
	SetConsoleCursorInfo(m_hStdout, &m_curInfo);
}

void ConsoleConfig::SetConsolePos(int posX, int posY, int height, int width)
{
	GetWindowRect(m_hWnd, &m_rect);
	MoveWindow(m_hWnd, posX, posY, height, width, true);
}

void ConsoleConfig::SleepCon(int l)
{
	Sleep(l);
}
