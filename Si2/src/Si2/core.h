#pragma once


#ifdef S2_PLATFORM_WINDOWS
	#ifdef S2_BUILD_DLL
		#define S2_API __declspec(dllexport)
	#else
		#define S2_API __declspec(dllimport)
	#endif
#else
	#error S2 only supports Windows;
#endif // S2_PLATFORM_WINDOWS
