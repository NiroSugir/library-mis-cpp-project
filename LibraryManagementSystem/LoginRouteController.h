#pragma once

#pragma once

#include "Controller.h"
#include "LoginRouteView.h"
#include "LoginRouteModel.h"

class LoginRouteController : public Controller
{
	LoginRouteModel* model{ nullptr };
	LoginRouteView* view{ nullptr };

public:
	LoginRouteController(Window* _window);

	void dismount() {
		//view->dismount();
	}
};
