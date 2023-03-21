#include <stdio.h>

int main(void) {
/*
	//반복문
	// for, while, do while

	//for문
	for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}

	//while문
	int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i);
		i++;
	}

	//do while문
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} 	while (i <= 10);
	*/
	//2중 반복문
	for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("    두 번째 반복문 : %d\n", j);
		}
	}

	//구구단, 피라미드 별찍기를 통해 연습
	return 0;
}