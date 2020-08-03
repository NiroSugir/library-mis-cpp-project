#pragma once

#include<memory>
#include "Window.h"
#include "View.h"
#include "Model.h"

using std::unique_ptr;

struct WindowSize {
	int width;
	int height;
};

// abstract Controller class used for assigning the views to the window
class Controller
{
protected:
	unique_ptr<Window> window{ nullptr };

	Controller(Window* _window) :window{ _window } {
		// TODO: figure out how to create abstract constructors

	};

public:
	//virtual WindowSize getWindowSize() = 0;
	// if any cleanup is needed
	virtual void dismount() = 0;
};

