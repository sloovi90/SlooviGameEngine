#pragma once
#include "CoreConfig.h"


namespace Sloovi {

	class  SGE_API Application
	{

	public:
		Application();
		virtual ~Application();
		virtual void Run();

	};

	Application* CreateApplication();
}

