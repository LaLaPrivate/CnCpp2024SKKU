// 4. 선언과 정의, 문장의 순서
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

void foo(); // 함수의 선언

int main() {
	// 1 선언(Declare): 내가 지금부터 '이러한 Identifier의' 무엇인가를 사용할 것이다 라고 알리는 모든 행위
	// 2 정의(Definition): 현재 선언된 '이러한 Identifier' 무엇인가가 어떠한것이므로~~ 라고 명시하는 행위
	
	// 두 가지의 구분은 명확하지만, 보통 '선언' 이라는 말에 정의 라는 뜻을 포함시킨다.
	// 즉, Declare, Definition 두 단어가 혼재되어 사용되고 있는것이 현실,

	int a; // 선언 + 정의, 변수는 하나의 이름을 갖고 사용됨
	int a; // (Error) 같은 이름공간 안에 동일한 변수 이름이 정의되어 있음 Error Re-definition 오류로 컴파일 불가


	// 모든 문장은 위에서 아래로 순서대로 실행된다.
	// '선언' 된 내용이 있을 경우 선언에 대한 정의는 위아래 순서에 관계없다
	foo(); // 정의는 아래에 있지만. 선언이 위에 있기 때문에 정상 작동한다.
	return 0;
}

void foo(){
	printf("FOO!!");
}