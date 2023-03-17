#include <stdio.h>

int main(void) {

	int age = 12;	//정수 12를 age라는 변수에 넣는다.

	printf("%d\n", age);	//%d정수형 값을 출력 <- 그 값은 ,뒤에 있는 age

	age = 13;

	printf("%d\n", age);	//age 값을 13으로 초기화해줘서 값이 13으로 변경

	return 0;
}