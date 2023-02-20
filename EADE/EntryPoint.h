#pragma once
#include "EADE.h"

#ifdef EADE_PLATFORM_WINDOWS

	extern EADE::Application* EADE::createApplication();

	int main(int argc, char** argv)
	{
		std::cout << "Start" << std::endl;
		auto app = EADE::createApplication();
		app->run();
		delete app;
		return 0;
	}
#endif