// 19. strcat
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() { 
	char* one = "Hello ";
	char* two = "world";
	char* three = strcat(one, two);
	printf("concatenated : %s\n", three);
	return 0;
}