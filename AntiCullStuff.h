#include "pch.h"
#include "stdio.h"
#include <string>
#include <windows.h>
#include "includes\injector\injector.hpp"

void Init()
{
	injector::WriteMemory<BYTE>(0x5BC408, 0x7C, true); // sub_5BC300
	injector::WriteMemory<BYTE>(0x5BC419, 0x7F, true); // sub_5BC300
}