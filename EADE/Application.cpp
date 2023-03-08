#include "Application.h"
#include "Event.h"
#include "ApplicationEvent.h"
#include <iostream>

namespace EADE
{
	void Application::run()
	{
		WindowResizeEvent e(1200, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			std::cout << e.ToString() << std::endl;
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			std::cout << e.ToString() << std::endl;
		}
		
		//Logging
		while (true);
	}
}