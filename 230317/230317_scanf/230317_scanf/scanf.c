#include <stdio.h>

int main(void) {

	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);	//&은 input이라는 변수에 값을 입력받겠다.
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);
	
	
	//문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));	//문자열을 입력받을시는 &표시 없이 변수만 넣어준다. 다만 문자열의 사이즈를 명시해준다.
	printf("%s\n", str);

	return 0;
}