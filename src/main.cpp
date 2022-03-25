#include <iostream>
#include "Core/Window.h"

const unsigned int WIDTH = 1600;
const unsigned int HEIGHT = 900;

int main()
{
	Window window;
	window.create(WIDTH, HEIGHT, "CSGO BHop Engine");

	while (!glfwWindowShouldClose(window.getWindow()))
	{
		//window.clear();
		//window.render();

		glfwPollEvents();
	}

	//window.dispose();

	std::cout << "Hello World!" << std::endl;
	return 0;
}