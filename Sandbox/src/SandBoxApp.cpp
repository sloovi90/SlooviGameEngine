#include <SlooviEngine.h>
#include <stdio.h>


class SandBox : public Sloovi::Application {

public:
	SandBox(){}
	~SandBox() {}
	void Run() override {
		printf("SandBox Run function");
		while (true);
	}
};
//this will be used at the engine's entry point
//Must be implmented to complete the Main function
Sloovi::Application* Sloovi::CreateApplication() {
	return new SandBox();
}