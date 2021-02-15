#pragma once

#ifdef S2_PLATFORM_WINDOWS

extern Si2::Application* Si2::createApplication();

int main(int argc,char** argv) {
	printf("Si2 Engine");
	auto app = Si2::createApplication();
	app->Run();
	delete app;
}
#endif // S2_PLATFORM_WINDOWS
