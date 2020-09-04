#include <SlooviEngine.h>
#include <stdio.h>


class SandBox : public Sloovi::Application {

public:
	SandBox(){}
	~SandBox() {}
	void Run() override {
		printf("SandBox Run function");
	}
};
//this will be used at the engine's entry point
Sloovi::Application* Sloovi::CreateApplication() {
	return new SandBox();
}