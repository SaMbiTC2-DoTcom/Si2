
#include <Si2.h>

class Sandbox : public Si2::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Si2::Application* Si2::createApplication() {
	return new Sandbox();
}