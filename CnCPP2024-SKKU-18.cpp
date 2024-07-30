// 18. strcmp
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() { 
	char str1[100] = "string 1";
	char str2[100] = "string 2";
	int compaired = 0;
	compaired = strcmp(str1, str1);
	printf("비교값 :%d\n", compaired);
	compaired = strcmp(str1, str2);
	printf("비교값 :%d\n", compaired);
	
	return 0;
}