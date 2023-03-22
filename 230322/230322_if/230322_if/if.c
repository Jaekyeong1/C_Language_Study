#include <stdio.h>

int main(void) {
	int age = 25;
	if (age >= 8 && age <= 13) {	//&&는 그리고 두가지의 경우의 수가 모두 참일 경우 실행
		printf("초등학생입니다\n");
	}
	else if (age >= 14 && age < 16) {
		printf("중학생입니다\n");
	}
	else if (age >= 17 && age <= 19) {
		printf("고등학생입니다\n");
	}
	else {
		printf("학생이 아닙니다\n");
	}
	return 0;
}