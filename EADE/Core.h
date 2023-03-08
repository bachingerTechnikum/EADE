#pragma once

#ifdef EADE_PLATFORM_WINDOWS
	#ifdef EADE_BUILD_DLL
		#define EADE_API __declspec(dllexport)
	#else 
		#define EADE_API __declspec(dllimport)
	#endif
#endif

#define BIT(x) (1 << x)