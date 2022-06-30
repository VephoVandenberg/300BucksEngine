#pragma once

#include "Core.h"

namespace TB
{
	class TB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	// Define in client
	Application* createApplication();
}

