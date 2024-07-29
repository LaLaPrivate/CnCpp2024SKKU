// 9. switch
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() { 
	int input;
	printf("숫자를 입력해주세요: ");
	scanf("%d", &input);

	switch(input){
		case 1: 
			printf("1을 입력하셨습니다.\n");
			break; // break 구문이 없다면 어떻게 될까?
		case 2:
			printf("2를 입력하셨습니다.\n");
			break;
		default:
			printf("무엇?\n");
			break;
	}
	return 0;
} 