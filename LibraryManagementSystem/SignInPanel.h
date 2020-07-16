#pragma once

#include "wx/wx.h"

class SignInPanel : public wxPanel
{
private:
	// container
	wxPanel* panel{ nullptr };

	// screen elements
	wxTextCtrl* txt_username{ nullptr };
	wxTextCtrl* txt_password{ nullptr };
	wxButton* btn_enter{ nullptr };
	wxButton* btn_clear{ nullptr };


public:
	static const int WIDTH{ 316 };
	static const int HEIGHT{ 578 };

	SignInPanel(wxWindow* _parent) :wxPanel(_parent, wxID_ANY, wxPoint(0, 0), wxSize(WIDTH, HEIGHT))
	{
		//panel = new wxPanel(_parent, wxID_ANY, wxPoint(0, 0), wxSize(WIDTH, HEIGHT));

		txt_username = new wxTextCtrl(this, wxID_ANY, "", wxPoint(35, 144), wxSize(248, 32));
		txt_password = new wxTextCtrl(this, wxID_ANY, "", wxPoint(35, 200), wxSize(248, 32), wxTE_PASSWORD);

		btn_enter = new wxButton(this, wxID_ANY, "Enter", wxPoint(35, 256), wxSize(120, 32));
		btn_clear = new wxButton(this, wxID_ANY, "Clear", wxPoint(164, 256), wxSize(120, 32));

		// bind button click events
		btn_enter->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onEnterClicked, this, wxID_ANY);
		btn_clear->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onClearClicked, this, wxID_ANY);
	}

	void onEnterClicked(wxCommandEvent& evt)
	{
		// do not propagate event
		evt.Skip();
	}

	void onClearClicked(wxCommandEvent& evt)
	{
		txt_username->SetValue("");
		txt_password->SetValue("");

		txt_username->SetFocus();

		// do not propagate event
		evt.Skip();
	}

	// todo: research pointer deletion for wx elements. check if the parent class truly handles it for us
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
