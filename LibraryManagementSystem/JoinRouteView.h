#pragma once

#include <vector>
#include "wx/wx.h"
#include "wx/statline.h"
#include "Window.h"
#include "JoinRouteModel.h"
//#include "Router.h"

// use macro to calculate the position from the mockup
#define MOCKUP_POSITION_JOIN(_x, _y)(wxPoint{_x - 260, _y - (799 + 30)})

using std::vector;
using std::string;

class JoinRouteView :public wxPanel {
private:
	JoinRouteModel* model{ nullptr };

	// screen elements
	wxStaticText* title{ nullptr };

	wxStaticText* label_first_name{ nullptr };
	wxTextCtrl* txt_first_name{ nullptr };

	wxStaticText* label_last_name{ nullptr };
	wxTextCtrl* txt_last_name{ nullptr };

	wxStaticText* label_username{ nullptr };
	wxTextCtrl* txt_username{ nullptr };

	wxStaticText* label_password{ nullptr };
	wxTextCtrl* txt_password{ nullptr };

	wxStaticText* label_password_verify{ nullptr };
	wxTextCtrl* txt_password_verify{ nullptr };

	wxStaticText* label_membership_type{ nullptr };
	wxChoice* cbo_membership_type{ nullptr };

	wxButton* btn_join{ nullptr };
	wxButton* btn_clear{ nullptr };

	wxStaticLine* seperator{ nullptr };

	wxStaticText* signin_message{ nullptr };
	wxButton* btn_back{ nullptr };

	wxStaticText* copyright_message{ nullptr };


	// todo: set correct fonts
	// todo: load fonts from styles class
	wxFont title_font{ 17, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD };
	//wxFont message_font{ 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont textbox_font{ 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont back_button_font{ 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont copyright_font{ 8, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };

	void onClearClicked(wxCommandEvent& evt);
	void onEnterClicked(wxCommandEvent& evt);
	void onBackClicked(wxCommandEvent& evt);

public:
	JoinRouteView(Window* _window, JoinRouteModel* _model);

	void mount();

	void bind();
};

