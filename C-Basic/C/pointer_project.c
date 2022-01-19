#include <stdio.h>
#include <time.h>
// ����Ⱑ 6������ �־��
// �̵��� ���׿� ��� �ִµ�, �縷�̿���
// �縷�� �ʹ� ������ , �ʹ� �����ؼ� ���� ���� ���� �����ؿ�
// ���� �� �����ϱ� ���� �������� ���׿� ���� �༭ ����⸦ ����ּ���.
// ������ �ð��� ���� ���� ���� Ŀ���� ���߿���... �ȳ�..

int level;
int arrayFish[6];
int* cursor;

void initData();
void printFishes();
void decreaseWater(long elapsedTime);

int main(void) {
	long startTime = 0; // ���� ���� �ð� �ð��� ���� long
	long totalElapsedTime = 0; // �� ����ð�
	long prevElapsedTime = 0; // ���� ����ð� (�ֱٿ� ���� �� �ð� ����)

	int num;// ��� ���� �� ������ ����� �Է�
	initData(); // �ʱⰪ �Է�

	cursor = arrayFish; // cursor[0].... cursor[1]

	startTime = clock(); // ���� �ð��� millisecond (1000���� 1�ʷ� ��ȯ)
	while (1) {
		printFishes();
		//getchar(); // �ӽ� ����� �Է� ���

		printf("�� �� ���׿� ���� �ֽðھ��? ");
		scanf_s("%d", &num);

		// �Է°� üũ
		if (num < 1 || num > 6) {
			printf("\n�Է� ���� �߸��Ǿ����ϴ�.\n");
			continue;
		}

		// �� ��� �ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ����ð� : %ld ��\n", totalElapsedTime);

		// ������ �� �� �ð� (���������� ������ �� �ð� ���ķ� �帥 �ð�.
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapsedTime);

		// ������ �� ���� (����)
		decreaseWater(prevElapsedTime);

		// ����ڰ� �Է��� ���׿� ���� �ش�.
		// 1. ������ ���� 0�̸�? -> ���� ���� �ʴ´�. �̹� ����Ⱑ ���..�Ф�
		if (cursor[num - 1] <= 0) {
			printf("%d�� ������ �̹� �׾����ϴ�. ���� ���� �ʽ��ϴ�.\n", num);
		}

		// 2. ������ ���� �ƴ� ��� ? > ���� �ش�! 100�� ���� �ʴ��� üũ
		// ���� 100�� ���� �ʾƾ� ��
		else if (cursor[num - 1] + 1 <= 100) {
			// ���� �ش�.
			printf("%d �� ���׿� ���� �ݴϴ�.\n\n", num);
			cursor[num - 1] += 1; // cursor[num - 1] = cursor[num - 1] + 1;
		}

		// �������� �� ���� Ȯ�� (�������� 20�� ���� �ѹ���)
		if (totalElapsedTime / 20 > level - 1) {
			// ������
			level++; // level 1 -> level 2 -> level 3
			printf("***** �� ������ ���� %d �������� %d ������ ���׷��̵�\n\n", level - 1, level);

			if (level == 5) {
				printf("\n\n �����մϴ�. �ְ� ������ �޼��Ͽ����ϴ�. ������ �����մϴ�.===\n");
				exit(0);
			}
		}

		if (checkFishAlive() == 0) { // ����� ��� ���
			printf("��� ����Ⱑ �׾����ϴ�. �Ф� ���� ... \n");
			exit(0);
		}
		else {
			//�ּ� �Ѹ��� ������ ��� ����
			printf("����Ⱑ ���� ����־��.\n");	
		}
		prevElapsedTime = totalElapsedTime;
		// 10�� -> 15�� (5�� : prevElapsedTime -> 15�ʷ� ����) -> 25��  (10��...?)
	}
	return 0;
}

void initData() {
	level = 1;
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;
	}
}

void printFishes() {
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3�� ���̵� ���� ��
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}


	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0)
			return 1;
	}
	return 0;
}