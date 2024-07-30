// 13. Data types
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() { 
	
	bool v_boolean = true; // bool : true / false
	short v_short = 512; // short : 2byte 정수
	int v_integer = 100; // int : 4byte 정수
	float v_floating_point_number = 3.1415; // float : 4byte 소수점수
	double v_double_precision_floating_point_number = 3.14159265; // double 8byte 소수점수

	char v_character = 'a';

	printf("v_boolean : %d\n", v_boolean); // %d
	printf("v_short : %d\n", v_short); // %d
	printf("v_integer : %d\n", v_integer); // %d
	printf("v_floating_point_number: %f\n", v_floating_point_number); // %f
	printf("v_double_precision_floating_point_number: %f\n", v_double_precision_floating_point_number); // %f
	
	printf("v_character : %c\n", v_character); // %c
	printf("v_character : %d\n", v_character); // guess this output

	printf("number: %d\n", 52);

	return 0;
} 