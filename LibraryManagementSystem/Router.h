#pragma once

#include "Window.h"

class Router
{
protected:
	static Router* instance;

	// this is the window object on which all views will be rendered on. pass a pointer to this
	// object to the controllers that are responsible for handling the views for their respective routes
	Window* window{ nullptr };

	// prevent creation from outside of static method
	Router();

public:
	// uncloneable
	Router(Router& other) = delete;

	// unassignable
	void operator=(const Router&) = delete;

	static Router* getInstance();
};
