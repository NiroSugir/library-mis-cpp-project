#include "Router.h"

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

void Router::switchToJoinRoute()
{
	if (currentRouteController) {
		currentRouteController->dismount();
	}

	currentRouteController = new JoinRouteController{ window };
}

//void Router::switchToLoginRoute()
//{
//	if (currentRouteController) {
//		currentRouteController->dismount();
//	}
//
//	currentRouteController = new LoginRouteController{ window };
//}
