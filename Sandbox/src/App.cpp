#include <TB.h>

class Sandbox : public TB::Application
{
public:
	Sandbox()
	{
		
	}

	~Sandbox()
	{
		
	}

};

TB::Application* TB::createApplication()
{
	return new Sandbox();
}