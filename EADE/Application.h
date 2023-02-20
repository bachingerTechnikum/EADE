#pragma once
#include "Core.h"

namespace EADE
{
	class EADE_API Application
	{
	public:
		Application(){}
		virtual ~Application(){}

		void run();
	};

	Application* createApplication();
}

