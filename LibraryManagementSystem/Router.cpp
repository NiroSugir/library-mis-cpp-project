#include "Router.h"

Router* Router::instance = nullptr;

Router::Router()
{
	Window* window = new Window;
	window->Show(true);

	// bring the screen to the front 
}

Router* Router::getInstance()
{
	if (instance == nullptr) {
		instance = new Router();
	}

	return instance;
}