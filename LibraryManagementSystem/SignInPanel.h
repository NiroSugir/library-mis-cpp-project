#pragma once

#include "wx/wx.h"

class SignInPanel
{
private:
	// container
	wxPanel* panel{ nullptr };

	// screen elements
	wxButton* btn_enter{ nullptr };
	wxButton* btn_clear{ nullptr };

public:
	static const int WIDTH{ 316 };
	static const int HEIGHT{ 578 };

	SignInPanel(wxWindow* _parent)
	{
		panel = new wxPanel(_parent, wxID_ANY, wxPoint(0, 0), wxSize(WIDTH, HEIGHT));

		btn_enter = new wxButton(panel, wxID_ANY, "Enter", wxPoint(35, 256), wxSize(120, 32));
		btn_clear = new wxButton(panel, wxID_ANY, "Clear", wxPoint(164, 256), wxSize(120, 32));
	}

	wxPanel* getPanel()
	{
		return panel;
	}

	~SignInPanel()
	{
		delete btn_enter;
		btn_enter = nullptr;

		delete btn_clear;
		btn_clear = nullptr;

		delete panel;
		panel = nullptr;
	}
};

