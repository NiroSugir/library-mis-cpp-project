#include "Router.h"
#include "constants.h"

Router* Router::instance = nullptr;

Router::Router()
{
	window = new Window;
	window->Show(true);
}

Router* Router::getInstance()
{
	if (instance == nullptr) {
		instance = new Router();
	}

	return instance;
}

void Router::switchToLoginRoute()
{
	if (currentRouteController) {
		currentRouteController->dismount();
	}

	window->SetTitle(APP_NAME + ": Login");
	currentRouteController = new LoginRouteController{ window };
}

void Router::switchToJoinRoute()
{
	if (currentRouteController) {
		currentRouteController->dismount();
	}

	window->SetTitle(APP_NAME + ": Join");
	currentRouteController = new JoinRouteController{ window };
}
