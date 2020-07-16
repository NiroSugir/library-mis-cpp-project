#pragma once

#include <memory>
#include "wx/wx.h"

using std::unique_ptr;

class SignInPanel : public wxPanel
{
private:
	// screen elements
	unique_ptr<wxTextCtrl> txt_username{ new wxTextCtrl{this, wxID_ANY, "", wxPoint{35, 144}, wxSize{248, 32}, wxTE_CENTER } };
	unique_ptr<wxTextCtrl> txt_password{ new wxTextCtrl{this, wxID_ANY, "", wxPoint{35, 200}, wxSize{248, 32}, wxTE_CENTER | wxTE_PASSWORD} };
	unique_ptr<wxButton> btn_enter{ new wxButton{this, wxID_ANY, "Enter", wxPoint{35, 256}, wxSize{120, 32} } };
	unique_ptr<wxButton> btn_clear{ new wxButton{this, wxID_ANY, "Clear", wxPoint{164, 256}, wxSize{120, 32} } };

public:
	static const int WIDTH{ 316 };
	static const int HEIGHT{ 578 };

	SignInPanel(wxWindow* _parent) :wxPanel{ _parent, wxID_ANY, wxPoint{0, 0 }, wxSize{ WIDTH, HEIGHT } }
	{
		// bind button click events
		btn_enter->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onEnterClicked, this, wxID_ANY);
		btn_clear->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onClearClicked, this, wxID_ANY);

		txt_username->SetFocus();
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

	~SignInPanel()
	{
		//unbind button click events
		btn_enter->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onEnterClicked, this, wxID_ANY);
		btn_clear->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &SignInPanel::onClearClicked, this, wxID_ANY);
	}
};
