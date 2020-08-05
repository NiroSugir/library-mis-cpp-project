#pragma once

#include "Controller.h"
#include "Router.h"
#include "LoginRouteView.h"
#include "LoginRouteModel.h"

// quick-fix for circular dependancy issues
class LoginRouteModel;
class LoginRouteView;

class LoginRouteController : public Controller
{
	LoginRouteModel* model{ nullptr };
	LoginRouteView* view{ nullptr };

public:
	LoginRouteController(Window* _window);

	void switchToJoinRoute();

	void dismount();
};
