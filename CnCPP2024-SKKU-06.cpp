// 6. 변수의 유효범위
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int adder(int a, int b);

int f(int x);

int g(int x, int y);

int main() { 
	int scope_01 = 0; // scope_01 이 유효한 범위 시작
	printf("scope(first): %d\n", scope_01);
	
	{
		int scope_01 = 100; // scope_01 유효범위 재시작
		int scope_02 = 0; // scope_02 유효범위 시작

		printf("scope(nested): %d\n", scope_01);
	
	} // scope_01, scope_02 유효범위 종료

	printf("scope(outter): %d\n", scope_01);

	return 0;
} // scope_01 유효범위 종료

int adder(int a, int b){  // int a, int b, 가 유효한 범위 시작
	
} // int a, int b 가 유효한 범위 종료

int f(int x){ // int x 가 유효한 범위 시작
	return 2*x*x + 3*x + 10;
} // int x 가 유효한 범위 종료

int g(int x, int y){ // int x, int y 가 유효한 범위 시작
	return x + y + 10;
} // int x 가 유효한 범위 종료