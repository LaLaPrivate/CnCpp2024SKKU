// 7. 사용자 입출력
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() { 
	int input;
	
	printf("Enter any number as integer: "); // 일반 문자 출력 (printf, function call in cstdio)
	
	// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& 중요 &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& 변수앞에, 꼭
	// & 왜 쓰나요. 몰?루
	scanf("%d", &input); // 사용자로부터 정수를 입력받아 input 변수에 할당 (scanf, function call in cstdio)
	
	printf("You've entered: %d", input); // 사용자가 입력받은 메시지를 출력

	return 0;
} 