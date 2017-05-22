#pragma once  //______________________________________ SpaceLine.h  
#include "Resource.h"
class SpaceLine : public Win::Dialog
{
public:
	SpaceLine()
	{
	}
	~SpaceLine()
	{
	}
	void line(int espacios, int asteriscos);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxSalida;
	Win::Textbox tbxEntrada;
	Win::Button btMostrar;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(372);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(484);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"SpaceLine";
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_LEFT | ES_WINNORMALCASE, 13, 45, 352, 432, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 48, 6, 98, 25, hWnd, 1001);
		btMostrar.Create(NULL, L"Mostrar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 168, 5, 99, 28, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxSalida.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btMostrar.Font = fontArial014A;
	}
	//_________________________________________________
	void btMostrar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btMostrar.IsEvent(e, BN_CLICKED)) { btMostrar_Click(e); return true; }
		return false;
	}
};
