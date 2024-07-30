// 17. scanf, strcpy
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() { 

	char str1[100];
	const char* str2 = "Hello World";
	
	char str3[100];

	printf("문자열을 입력해주세요: ");
	scanf("%99[^\n]s", str1);

	strcpy(str3, str1);
	printf("복사된 문자열: %s", str3);
	
	
	return 0;
}