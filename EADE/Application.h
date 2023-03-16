#pragma once
#include "Core.h"
#include "Window.h"
#include "ApplicationEvent.h"

namespace EADE
{
	class EADE_API Application
	{
	public:
		Application();
		virtual ~Application(){}

		void run();
		void OnEvent(Event& e);

	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	Application* createApplication();
}

