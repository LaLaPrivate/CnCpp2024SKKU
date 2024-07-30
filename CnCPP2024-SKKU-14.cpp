// 14. Array
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 


int main() { 
	
	int prices[3];
	prices[0] = 100;
	prices[1] = 200;
	prices[3] = 400;

	printf("prices[0]: %d\n", prices[0]);

	for(int i=0; i<sizeof(prices); i++){
		printf("prices[%d]: %d", i, prices[i]);
	}
 
	return 0;
} 