#pragma once

#ifdef TB_PLATFORM_WINDOWS

extern TB::Application* TB::createApplication();

int main(int argc, char** argv)
{
	printf("Swallow my engine\n");
	auto app = TB::createApplication();
	app->run();
	delete app;
}

#endif
