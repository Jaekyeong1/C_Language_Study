#include <stdio.h>

int main(void) {

	//���� vs ���ڿ�
	//char c = 'A';
	//printf("%c\n", c);

	//���ڿ� ������ '��' �� �ǹ��ϴ� NULL ���� '\0' �� ���ԵǾ�� ��
	//char str[6] = "coding";	//[c] [o] [d] [i] [n] [g] [\0]
	//char str[7] = "coding";
	//printf("%s\n", str);

	//char str[] = "coding";	
	//printf("%s\n", str);	//6�����ε�
	//printf("%d\n", sizeof(str));	//7�� ��µ�. ������ �ڿ� null�� ���� ����

	//for (int i = 0; i < sizeof(str); i++) {
	//	printf("%c\n", str[i]);
	//}

	//char kor[] = "�����ٶ�";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));
	//����� �ѱ��� : 1byte
	//�ѱ��� �ѱ��� : 2byte

	//char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	//printf("%s\n", c_array);

	//char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	//printf("%s\n", c_array);
	//for (int i = 0; i < sizeof(c_array); i++) {
	//	printf("%d\n", c_array[i]);	//ASCII �ڵ� �� ��� (null ���� 0���� �Է�)
	//}

	//char name[256];
	//printf("�̸��� �Է��ϼ��� : ");
	//scanf_s("%s", name, sizeof(name));
	//printf("%s\n", name);

	//���� : ASCII �ڵ� ? ANSI(�̱�ǥ����ȸ) ���� ������ ǥ�� �ڵ� ü��
	// 7bit, �� 128�� �ڵ�(0~127)
	// a : 97 (���� a�� �ƽ�ũ�ڵ� ������)
	// A : 65
	// 0 : 48

	return 0;
}