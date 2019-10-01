#pragma once
#include <iostream>
#include <GLFW/glfw3.h>
namespace OSGE {
	namespace graphics {
		class Window
		{
		public:
			Window(const char *title, int width, int height);
			~Window();
			void update() const;
			bool closed() const;
		private:
			int m_Width, m_Height;
			const char* m_Title;
			GLFWwindow* m_Window;
			bool m_Closed;
		private:
			bool init();
		};
	}
}