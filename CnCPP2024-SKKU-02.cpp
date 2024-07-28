// 2. 변수 값을 저장하는 공간
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio> // C STanDard Input Output
#include <cstdlib> // C STanDard Library
#include <cmath> // C Math
#include <ctime> // C Time
#include <cstring> // C String

int main() {
	int a; // 변수 선언방법, int 를 작성후, 뒤에 이름을 붙인다.
	a = 10; // 변수에 값을 대입

	int b = 10; // 선언과 동시에 값을 할당

	c = 10; // 오류 코드 (c 라는 변수는 없음)
	int c;

	/*
	  변수의 이름 규칙 
	  
	  변수의 이름에는 Alphabet 과 Digit, 그리고 언더스코어(_)를 사용할 수 있다.
	  변수에는 '정확하게' 다음과 같은 이름은 사용할 수 없다
	  
	  bool, short, int, long, float, void, if, else, class, struct, new, ...
	  이를 Reserved keyword 라고 한다.

	  변수의 이름은 Alpha 로 시작하여, AlphaDigit으로 끝나야만 한다.
	*/

	int abc; // 올바른 변수이름
	int abc; // (Error) 같은 이름의 변수는 두번 선언할 수 없음 (오류 코드)

	int Abc; // 변수는 대소문자를 구분 (abc 와 Abc는 다름)

	int abc_10; // 변수의 중간에 언더스코어(_)를 쓸 수 있음
	int abc 10; // (Error) 변수 이름에는 개행을 할 수 없음

	int abc10; // 변수의 이름 뒤에는 숫자를 넣을 수 있음
	int 1abc; // (Error) 변수의 이름 앞에는 숫자를 넣을 수 없음

	return 0;
}