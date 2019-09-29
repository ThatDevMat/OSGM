#include "window.h"
#include <iostream>
#include <GLFW/glfw3.h>
namespace OSGE {
	class Window
	{
	public:
		int init(int, int) {
			return 0;
		};
		~Window() {
			std::cout << "END" << std::endl;
		}
	private:

	};
}