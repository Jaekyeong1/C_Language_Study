#include <stdio.h>

int main(void) {

	//문자 vs 문자열
	//char c = 'A';
	//printf("%c\n", c);

	//문자열 끝에는 '끝' 을 의미하는 NULL 문자 '\0' 이 포함되어야 함
	//char str[6] = "coding";	//[c] [o] [d] [i] [n] [g] [\0]
	//char str[7] = "coding";
	//printf("%s\n", str);

	//char str[] = "coding";	
	//printf("%s\n", str);	//6글자인데
	//printf("%d\n", sizeof(str));	//7이 출력됨. 이유는 뒤에 null이 들어가기 때문

	//for (int i = 0; i < sizeof(str); i++) {
	//	printf("%c\n", str[i]);
	//}

	//char kor[] = "가나다라";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));
	//영어는 한글자 : 1byte
	//한글은 한글자 : 2byte

	//char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	//printf("%s\n", c_array);

	//char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	//printf("%s\n", c_array);
	//for (int i = 0; i < sizeof(c_array); i++) {
	//	printf("%d\n", c_array[i]);	//ASCII 코드 값 출력 (null 문자 0으로 입력)
	//}

	//char name[256];
	//printf("이름을 입력하세요 : ");
	//scanf_s("%s", name, sizeof(name));
	//printf("%s\n", name);

	//참고 : ASCII 코드 ? ANSI(미국표준협회) 에서 제시한 표준 코드 체계
	// 7bit, 총 128개 코드(0~127)
	// a : 97 (문자 a의 아시크코드 정수값)
	// A : 65
	// 0 : 48

	return 0;
}