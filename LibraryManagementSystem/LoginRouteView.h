#pragma once

#include <vector>
#include "wx/wx.h"
#include "wx/statline.h"
#include "constants.h"
#include "Window.h"
#include "LoginRouteController.h"
#include "LoginRouteModel.h"

// use macro to calculate the position from the mockup
#define MOCKUP_POSITION_LOGIN(_x, _y)(wxPoint{_x - 260, _y - (96 + 30)})

using std::vector;
using std::string;

// avoid circular dependancy issues
class LoginRouteController;

class LoginRouteView :public wxPanel {
private:
	const int WIDTH = 316;
	const int HEIGHT = 578;

	LoginRouteController* controller{ nullptr };
	LoginRouteModel* model{ nullptr };

	// screen elements
	wxStaticText* title{ nullptr };
	wxStaticText* message{ nullptr };

	wxStaticText* label_username{ nullptr };
	wxTextCtrl* txt_username{ nullptr };

	wxStaticText* label_password{ nullptr };
	wxTextCtrl* txt_password{ nullptr };

	wxButton* btn_enter{ nullptr };
	wxButton* btn_clear{ nullptr };

	wxStaticLine* seperator{ nullptr };

	wxStaticText* join_message{ nullptr };
	wxButton* btn_join{ nullptr };

	wxStaticText* copyright_message{ nullptr };


	// todo: set correct fonts
	wxFont title_font{ 17, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD };
	wxFont message_font{ 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont textbox_font{ 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };
	wxFont join_button_font{ 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD };
	wxFont copyright_font{ 8, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL };

	void onEnterClicked(wxCommandEvent& evt);

	void onClearClicked(wxCommandEvent& evt);

	void onJoinClicked(wxCommandEvent& evt);

public:
	LoginRouteView(Window* _window, LoginRouteController* _controller, LoginRouteModel* _model);

	void mount();

	void bind();

	void dismount();

};

