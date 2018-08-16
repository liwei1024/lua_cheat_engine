// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include "windows.h"
#include <string>
#include <vector>


// TODO: 在此处引用程序需要的其他头文件

#ifdef __cplusplus
extern "C" {
#include "lua.h"
#include "lualib.h"  
#include "lauxlib.h" 
}
#else  
#include "lua.hpp"
#include "lualib.h"  
#include "lauxlib.h"  
#endif