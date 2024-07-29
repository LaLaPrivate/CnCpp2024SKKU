// 10. nested loop, control statement
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

int main() { 
	
	for(int i=0; i<10; i++){ // i
		
		for(int k=0; k<8; k++){ // k는 매 i반복마다 새로 0부터 8번 반복하게 된다.
			printf("하");
		}
		
		printf("\n");
	}

	for(int i=0; i<1000; i++){
		if(i < 4) { // i가 4보다 작은 경우 루프를 다시 시작한다.
			continue;
		}

		printf("^");
		
		if(i == 10){ // i가 10과 같은 값이 되면 루프를 탈출한다.
			break;
		} 
	}

	return 0;
} 