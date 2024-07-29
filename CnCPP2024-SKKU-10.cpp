// 10. loop
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() { 
	
	// 컴퓨터의 숫자는 0부터 시작한다. (1이 아니야)
	for(int i=0; i<10; i++){ // i의 유효범위를 잘 생각할것,
		printf("아!\n");
	}

	int input;

	printf("숫자를 입력해주세요: ");
	scanf("%d", &input);

	for(int i=0; i<input; i++){ // i를 재사용한것에 대해 다시 상기해볼것
		printf("하응!\n");
	}

	return 0;
} 