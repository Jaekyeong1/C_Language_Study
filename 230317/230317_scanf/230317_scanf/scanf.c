#include <stdio.h>

int main(void) {

	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);	//&�� input�̶�� ������ ���� �Է¹ްڴ�.
	printf("�Է°� : %d\n", input);

	int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);
	
	
	//����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));	//���ڿ��� �Է¹����ô� &ǥ�� ���� ������ �־��ش�. �ٸ� ���ڿ��� ����� ������ش�.
	printf("%s\n", str);

	return 0;
}