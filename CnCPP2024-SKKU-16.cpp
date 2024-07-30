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

	
	
	return 0;
} 

void swap_sol1(int x, int y){
	int temp = x;
	int x = y;
	int y = temp;
}

void swap_sol2(int& x, int& y){
	int temp = x;
	int x = y;
	int y = temp;
}

void swap_sol3(int* x, int* y){
	int temp = (*x);
	int x = (*y);
	int y = temp;
}