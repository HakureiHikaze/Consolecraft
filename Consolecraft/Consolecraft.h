#pragma once
#include<iostream>
#include"typePoint.h"
#include"Player.h"
#include<Windows.h>
#include<stdio.h>
#define initializeHandle HANDLE hOut;CONSOLE_SCREEN_BUFFER_INFO bInfo;hOut = GetStdHandle(STD_OUTPUT_HANDLE);GetConsoleScreenBufferInfo(hOut, &bInfo);