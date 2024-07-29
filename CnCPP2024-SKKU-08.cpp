// 8. 조건문
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() { 
	if(true){
		printf("참\n");
	}

	if(false){
		printf("거짓\n");
	}

	int input;
	printf("숫자를 입력해주세요: ");
	scanf("%d", &input);

	if(input == 1){ // 비교연산, 참거짓 판단
		printf("1을 입력하셨네요!\n");
	}
	else if(input == 2){ 
		printf("2를 입력하셨네요\n");
	}
	else{
		printf("당신?\n");
	}

	/*
	아래의 구문과 다른점은?

	if(input == 1){ // 비교연산, 참거짓 판단
		printf("1을 입력하셨네요!\n");
	}
	if(input == 2){ 
		printf("2를 입력하셨네요\n");
	}
	else{
		printf("당신?\n");
	}
	*/

	return 0;
} 