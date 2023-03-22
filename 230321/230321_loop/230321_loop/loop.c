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

	//2중 반복문
	for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("    두 번째 반복문 : %d\n", j);
		}
	}
	

	//구구단, 피라미드 별찍기를 통해 연습

	//구구단
	for (int i = 2; i <= 9; i++) {
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++) {
			printf(" %d X %d = %d\n", i, j, i * j);
		}
	}

	

	//피라미드 별찍기

	for (int i = 0; i < 5; i++) {
		printf("\n");
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
;	}
	*/
	/*
	* 
	**
	***
	****
	*****
	*/
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}

	/*
	    *
	   **
	  ***
	 ****
	*****
	*/
	return 0;
}