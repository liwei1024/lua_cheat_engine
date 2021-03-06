// client.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "base_functions.h"
#include "global.h"
#include "lua_function_register.h"



void lua_init()
{
	L = luaL_newstate();
	luaL_openlibs(L); //载入Lua基本库
	lua_function_register();
	luaL_dofile(L, "addFun.lua");//运行脚本
	printf("987654321");
}

int main()
{
	try
	{
		aa_engine = LoadLibrary(L"aa_engine.dll");  // 载入DLL
		if (aa_engine == NULL)
		{
			printf("aa_engine 加载失败 error code - < %d >\n", GetLastError());
			system("pause");
		}
		autoAssemble = (AutoAssemble)GetProcAddress(aa_engine, "AutoAssemble");
		getAddress = (GetAddress)GetProcAddress(aa_engine, "GetAddress");
		getVer = (GetVer)GetProcAddress(aa_engine, "Ver");

		printf("当前版本 %s\n", getVer());
		system("pause");
		lua_init();
	}
	catch (const char* error_msg)
	{
		printf("%s\n", error_msg);
	}
	system("pause");
    return 0;
}

