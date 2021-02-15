#pragma once
#include "core.h"

namespace Si2 {
	class S2_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	Application* createApplication();
}

