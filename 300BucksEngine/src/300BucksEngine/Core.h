#pragma once


#ifdef TB_PLATFORM_WINDOWS
	#ifdef TB_BUILD_DLL
		#define TB_API __declspec(dllexport)
	#else
		#define TB_API __declspec(dllimport)
	#endif
#else
	#error Three Hundred Bucks Engine Supports Only Windows
#endif