// 14. Array
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 


int main() { 
	
	int prices[3]; // 3크기의 배열을 선언
	prices[0] = 100; // 0번 offset 에 100 의 값을 저장
	prices[1] = 200; // 1번 offset 에 200 의 값을 저장
	prices[2] = 400; // 2번 offset 에 400 의 값을 저장

	printf("prices[0]: %d\n", prices[0]); // 0번 offset값을 출력

	for(int i=0; i<sizeof(prices); i++){
		printf("prices[%d]: %d", i, prices[i]); // 모든 offset 값을 출력
	}
 
	return 0;
} 