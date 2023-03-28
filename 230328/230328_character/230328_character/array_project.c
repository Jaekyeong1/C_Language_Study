#include <stdio.h>
#include <time.h>

int main(void) {

	srand(time(NULL));
	printf("\n\n ==============����==============\n");

	int answer;
	int treatment = rand() % 4;	//����

	int cntShowBottle = 0;	//�̹� ���ӿ� ������ �� ����
	int prevCntShowBottle = 0;	//�� ���ӿ� ������ �� ����
	//���� �����ִ� �� ������ �ٸ��� �Ͽ� ����� ���(ó�� 2�� -> ���� 3�� ...)

	//3���� ��ȸ
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0, 0, 0, 0 };	//4���� ��
		do {
			cntShowBottle = rand() % 2 + 2;	//������ �� ���� (0~1, +2 - > 2, 3)
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;

		int isIncluded = 0;	//������ �� �߿� ���ԵǾ����� ����
		printf(" > %d ��° �õ� : ", i);

		// ������ �� ������ ����
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4;	//0~3

			//���� ���õ��� ���� ���̸�, ���� ó��
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}
			//�̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
			else {
				j--;
			}
		}

		//����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1)
				printf("%d", k + 1);
		}

		printf("����մϴ� \n");

		if (isIncluded == 1) {
			printf(" >> ���� !\n");
		}
		else {
			printf(" >> ���� !\n");
		}

		printf("\n.. ��� �Ϸ��� �ƹ� Ű�� ��������...");
		getchar();
	}

	printf("\n\n������ �� ���ϱ�� ?");
	scanf_s("%d", &answer);

	if (answer == treatment + 1) {
		printf("\n >> �����Դϴ�! \n");
	}
	else {
		printf("\n >> �� ! Ʋ�Ƚ��ϴ� ! ������ %d�Դϴ� !", treatment + 1);
	}
	return 0;
}