// 5. 연산과 함수의 뜻
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int adder(int a, int b); // adder 라는 이름의 함수 선언, 이름(identifier)은 변수의 이름규칙과 같다.

int f(int x); // f(x)

int g(int x, int y); // g(x)

int main() {
	// 컴퓨터에게 연산을 시키는 이유는 반복되고 지루한 작업을 하지 않기 위해서다.
	
	int result = adder(10, 20); // 함수 호출과 그에 따른 결과를 할당
	printf("%d\n", result);

	int some_some = 100;
	
	int result_of_fx = f(some_some);
	printf("%d\n", result_of_fx);

	// Test f(x)
	// Test g(x, y)

	return 0;
}

int adder(int a, int b){ // 함수의 정의
	return a + b;
}

int f(int x){ // f(x)
	return 2*x*x + 3*x + 10;
}

int g(int x, int y){
	return x + y + 10;
}