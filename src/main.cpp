#include <iostream>
#include "graphics/Window.h"

const unsigned int WIDTH = 1600;
const unsigned int HEIGHT = 900;

int main()
{
	using namespace Graphics;

	Window window("CSGO Bhop", WIDTH, HEIGHT);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	while (!window.closed())
	{
		window.clear();

		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(-0.5f, 0.5f);
		glVertex2f(0.5f, 0.5f);
		//glVertex2f(0.5f, -0.5f);
		glEnd();

		window.update();
	}
	return 0;
}