#include <stdio.h>

int main(void) {

	float f = 46.5f;
	printf("%f\n", f);	//��ó�� ���������� 46.500000 ���� ��µȴ�. �ڸ����� ���ϰ��� �ϴ� ���
	//printf("%.1f\n", f); �� ���� %.���ϴ� �ڸ���f �̷��� �ۼ��� �Ѵ�
	double d = 4.428;
	printf("%.2lf\n", d);	//�Ҽ��� 2��° �ڸ����� �ݿø��ȴ�.
	return 0;
}