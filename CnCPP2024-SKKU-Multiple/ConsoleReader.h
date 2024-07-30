#ifndef __CONSOLE_READER_H__
#define __CONSOLE_READER_H__

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio> // C STanDard Input Output
#include <cstdlib> // C STanDard Library
#include <cmath> // C Math
#include <ctime> // C Time
#include <cstring> // C String

int ReadInt(const char* prompt);
float ReadFloat(const char* prompt);
void ReadString(const char* prompt, char* out);

#endif