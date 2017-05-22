#include "stdafx.h"  //________________________________________ SpaceLine.cpp
#include "SpaceLine.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	SpaceLine app;
	return app.BeginDialog(IDI_SpaceLine, hInstance);
}

void SpaceLine::Window_Open(Win::Event& e)
{

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

void SpaceLine::btMostrar_Click(Win::Event& e)
{
	tbxSalida.Text = L"";
	const int renglones = tbxEntrada.IntValue;
	for (int i = 0, e = renglones - 1, a = 1; i < renglones; i++, e--, a++)
	{
		line(e, a);
	}
	for (int i = 0, e = 1, a = renglones - 1; i < renglones; i++, a--, e++)
	{
		line(e, a);
	}
}

