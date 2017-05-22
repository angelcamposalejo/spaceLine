#include "stdafx.h"  //________________________________________ SpaceLine.cpp
#include "SpaceLine.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	SpaceLine app;
	return app.BeginDialog(IDI_SpaceLine, hInstance);
}

void SpaceLine::Window_Open(Win::Event& e)
{
	line(0, 3);
	line(2, 7);
	line(2, 5);
	line(5, 3);
}
void SpaceLine::line(int espacios, int asteriscos)
{
	wstring texto;
	for (int i = 0; i < espacios; i++)
	{
		Sys::Format(texto, L"%s", " ");
		tbxSalida.Text += texto;
	}
	for (int i = 0; i < asteriscos; i++)
	{
		Sys::Format(texto, L"%s", "*");
		tbxSalida.Text += texto;
	}
	Sys::Format(texto, L"\r\n");
	tbxSalida.Text += texto;
}

