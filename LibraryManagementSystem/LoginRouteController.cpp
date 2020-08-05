#include "LoginRouteController.h"

LoginRouteController::LoginRouteController(Window* _window) :Controller{ _window }
{
	model = new LoginRouteModel;
	view = new LoginRouteView{ _window, this, model };

	view->mount();
	view->bind();
}

void LoginRouteController::switchToJoinRoute()
{
	Router::getInstance()->switchToJoinRoute();
}

void LoginRouteController::dismount()
{
	view->dismount();
}
