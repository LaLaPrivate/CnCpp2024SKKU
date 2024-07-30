// 16. Pointer Swap
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

void swap_sol1(int x, int y);
void swap_sol2(int& x, int& y);
void swap_sol3(int* x, int* y);

int main() { 
	int left = -5;
	int right = 5;
	
	printf("left: %d, right: %d\n", left, right);
	swap_sol1(left, right);
	printf("left: %d, right: %d\n", left, right);


	left = -5;
	right = 5;
	printf("left: %d, right: %d\n", left, right);
	swap_sol2(left, right);
	printf("left: %d, right: %d\n", left, right);

	left = -5;
	right = 5;
	printf("left: %d, right: %d\n", left, right);
	swap_sol3(&left, &right);
	printf("left: %d, right: %d\n", left, right);
	
	return 0;
} 

// solution-1 , 실제로 swap이 되지 않음
void swap_sol1(int x, int y){
	int temp = x;
	int x = y;
	int y = temp;
}

// Reference 를 이용하여 swap을 작동
void swap_sol2(int& x, int& y){
	int temp = x;
	int x = y;
	int y = temp;
}

// Pointer를 이용하여 swap을 작동
void swap_sol3(int* x, int* y){
	int temp = (*x);
	int x = (*y);
	int y = temp;
}