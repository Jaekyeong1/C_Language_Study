#include <stdio.h>

int main(void) {
/*
	//�ݺ���
	// for, while, do while

	//for��
	for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}

	//while��
	int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i);
		i++;
	}

	//do while��
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} 	while (i <= 10);
	*/
	//2�� �ݺ���
	for (int i = 1; i <= 3; i++) {
		printf("ù ��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("    �� ��° �ݺ��� : %d\n", j);
		}
	}

	//������, �Ƕ�̵� ����⸦ ���� ����
	return 0;
}