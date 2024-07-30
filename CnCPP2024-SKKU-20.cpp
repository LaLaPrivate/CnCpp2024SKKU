// 20. strstr
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() { 
	char* line = "String string some string I don’t like you";
	char* find = "ng I don’t lik";
	char* found1 = (char*)strstr(line, find);
	printf("found1 :%d\n", (line - found1));
	
	char* index = (char*)strstr(line, "abc");
	printf("found2 :%d\n", index);

	return 0;
}