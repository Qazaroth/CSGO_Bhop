#include "Window.h"

namespace Graphics
{
	// Private
	void windowResize(GLFWwindow *window, int width, int height)
	{
		glViewport(0, 0, width, height);
	}

	bool Window::init()
	{
		if (!glfwInit())
		{
			std::cout << "Failed to initialize GLFW!" << std::endl;
			return false;
		}

		_window = glfwCreateWindow(_width, _height, _title, NULL, NULL);

		if (!_window)
		{
			std::cout << "Failed to create GLFW window!" << std::endl;
			return false;
		}

		glfwMakeContextCurrent(_window);
		glfwSetWindowSizeCallback(_window, windowResize);

		return true;
	}

	//Public 
	Window::Window(const char *title, int width, int height)
		: _title(title), _width(width), _height(height)
	{
		if (!init()) glfwTerminate();
	}

	Window::~Window()
	{
		glfwTerminate();
	}

	void Window::clear() const
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}

	void Window::update()
	{
		glfwPollEvents();
		glfwSwapBuffers(_window);
	}
}