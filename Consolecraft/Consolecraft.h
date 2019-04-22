#pragma once
#include"World.h"
#include"Player.h"
#include"help.h"
#include"Proxy.h"
#include"include.h"
//#include<stdio.h>
#define initializeHandle HANDLE hOut;CONSOLE_SCREEN_BUFFER_INFO bInfo;hOut = GetStdHandle(STD_OUTPUT_HANDLE);GetConsoleScreenBufferInfo(hOut, &bInfo);