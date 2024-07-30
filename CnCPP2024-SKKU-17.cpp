// 17. scanf, strcpy
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() { 

	char str1[100];
	const char* str2 = "Hello World";
	
	// 컴퓨터에서의 모든 문자열은 Null-terminated string 이다. 문자열의 끝을 Null 문자 (0값)으로 만들어 끝을 표현한다.
	char str3[100];

	printf("문자열을 입력해주세요: ");
	scanf("%99[^\n]s", str1); // 99개의 문자와 null 문자를 이용하여 문자열을 사용자로부터 받음.

	strcpy(str3, str1); // 문자열을 복사한다.
	printf("복사된 문자열: %s", str3);

	fseek(stdin, 0, SEEK_END);
	
	
	return 0;
}