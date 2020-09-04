#pragma once
//we define SLOOVI_PLATFORM_WINDOWS in all projects preprocessor definitions
//we define SLOOVI_BUILD_DLL only at SlooviGameEngine project preprocessor definitions
//for export (others will have import)

#ifdef SLOOVI_PLATFORM_WINDOWS 
	#ifdef SLOOVI_BUILD_DLL
		#define SLOOVI_API __declspec(dllexport)
	#else   
		#define SLOOVI_API __declspec(dllimport)
	#endif
#else
#error SLOOVI is supported only for windows atm
#endif

