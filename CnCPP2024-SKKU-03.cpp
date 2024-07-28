// 3. 사칙연산과 논리연산

// 다음 구문은 Visual studio 2022 를 사용할때 필요한 구문
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() {
	/* == 사칙연산 == */

	int a = 10; // 연산 1 : 할당연산

	int b = a = 20; // 할당은 그 자체로 값을 의미한다.
	printf("%d\n", b); // b라는 변수의 값을 콘솔에 출력

	int c = 10 + 20; // 연산 2 : 덧셈연산
	printf("%d\n", c); // c라는 변수의 값을 콘솔에 출력

	int d = 20 - 5; // 연산 3 : 뺄셈연산
	printf("%d\n", c); // c라는 변수의 값을 콘솔에 출력

	int e = 40 * 5; // 연산 4 : 곱셈연산
	// Print variable

	int f = 120 / 12; // 연산 5 : 나눗셈 연산
	// Print variable

	int g = 12 % 5; // 연산 6 : 나머지 연산
	// Print variable

	int test_01 = 10 + 20 * 3;
	printf("%d\n", test_01);


	/* == 논리연산 == */

	int A = true; // 논리값 true,
	printf("%d\n", A);

	int B = false; // 논리값 false
	printf("%d\n", B);

	int and_01 = true && true; // and 연산자 : T and T 일 경우에만 T
	// Print variable

	int and_02 = true && false; // F
	// Print variable

	int and_03 = false && false; // F
	// Print variable

	int or_01 = true || true; // or 연산자 : F or F 일 경우에만 F
	
	int or_02; // Test yourself
	int or_03; // Test yourself

	int not_01 = !true; // not 연산자 : T -> F, F -> T 변환
	// Print variable

	return 0; 
}