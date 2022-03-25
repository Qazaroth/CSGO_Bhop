#pragma once

#include <iostream>
#include <GLFW/glfw3.h>

namespace Graphics
{
	class Window
	{
	private:
		GLFWwindow *_window;

		const char *_title;

		int _width;
		int _height;

		bool _closed;

		bool init();
	public:
		Window(const char *name, int width, int height);
		~Window();

		void clear() const;
		void update();

		inline bool closed() const { return glfwWindowShouldClose(_window) == 1; }

		inline int getWidth() const { return _width; }
		inline int getHeight() const { return _height; }
	};
}