#pragma once

#ifdef SLOOVI_PLATFORM_WINDOWS 

//this will be provided by Client
extern Sloovi::Application* Sloovi::CreateApplication();

int main(int argc, char** argv) {
	auto app = Sloovi::CreateApplication();
	app->Run();//this will probably be some1's run function since it is virtual
	delete app;
	return 0;
}

#else
#error SLOOVI is supported only for windows atm
#endif