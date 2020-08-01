#pragma once

#include <memory>
#include "wx/wx.h"
#include "wx/statline.h"
#include "IntroductionWindow.h"

// use macro to calculate the position from the mockup
#define MOCKUP_POSITION_SIGN_IN(_x, _y)(wxPoint{_x - 260, _y - (96 + 30)})

class SignInPanel : public wxPanel
{
private:
	IntroductionWindow* intro{ nullptr };

	// screen elements
	wxStaticText* title{ new wxStaticText{this, wxID_ANY, "Sign In",  MOCKUP_POSITION_SIGN_IN(296, 150) , wxSize{ 84, 36 } } };
	wxStaticText* message{ new wxStaticText{this, wxID_ANY, "Welcome back to [library_name]!", MOCKUP_POSITION_SIGN_IN(296, 188), wxSize{ 234, 22 } } };

	wxStaticText* label_username{ new wxStaticText{this, wxID_ANY, "Username:", MOCKUP_POSITION_SIGN_IN(296, 240 - 18), wxSize{ 234, 15 } } };
	wxTextCtrl* txt_username{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION_SIGN_IN(296, 240), wxSize{ 248, 25 }, wxTE_CENTER } };

	wxStaticText* label_password{ new wxStaticText{this, wxID_ANY, "Password:", MOCKUP_POSITION_SIGN_IN(296, 296 - 18), wxSize{ 234, 15 } } };
	wxTextCtrl* txt_password{ new wxTextCtrl{this, wxID_ANY, "", MOCKUP_POSITION_SIGN_IN(296, 296), wxSize{ 248, 25 }, wxTE_CENTER | wxTE_PASSWORD} };

	wxButton* btn_enter{ new wxButton{this, wxID_ANY, "Enter", MOCKUP_POSITION_SIGN_IN(296, 352), wxSize{ 120, 32 } } };
	wxButton* btn_clear{ new wxButton{this, wxID_ANY, "Clear", MOCKUP_POSITION_SIGN_IN(424, 352), wxSize{ 120, 32 } } };

	wxStaticLine* seperator{ new wxStaticLine{this, wxID_ANY, MOCKUP_POSITION_SIGN_IN(319, 417), wxSize{198, 1}, wxLI_HORIZONTAL} };

	wxStaticText* join_message{ new wxStaticText{this, wxID_ANY, "Not a member yet? Start by registering. Don't worry, it's free.", MOCKUP_POSITION_SIGN_IN(296, 435), wxSize{ 248, 37 } } };
	wxButton* btn_join{ new wxButton{this, wxID_ANY, "Join", MOCKUP_POSITION_SIGN_IN(296, 491), wxSize{ 248, 104} } };

	wxStaticText* copyright_message{ new wxStaticText{this, wxID_ANY, "Copyright 2020 by Niroshan Sugirtharatnam.\nAll Rights Reserved.", MOCKUP_POSITION_SIGN_IN(296, 614), wxSize{ 249, 29 }, wxTE_CENTER } };


	// todo: set correct fonts
	wxFont title_font{ 17, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD };
	wxFont message_font{ 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont textbox_font{ 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont join_button_font{ 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD };
	wxFont copyright_font{ 8, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };

public:
	static const int WIDTH{ 316 };
	static const int HEIGHT{ 578 };

	SignInPanel(wxWindow* _parent, IntroductionWindow* _i);

	void onEnterClicked(wxCommandEvent& evt);

	void onClearClicked(wxCommandEvent& evt);

	void onJoinClicked(wxCommandEvent& evt);

	~SignInPanel();
};
