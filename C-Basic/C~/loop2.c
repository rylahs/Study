#include <stdio.h>

int main_loop2 (void) {

	// �߿��ϴϱ� �� ����ϱ�
	// break : ���� �����ִ� �ݺ���{} ���� Ż��
	// continue : �Ʒ��� �ִ� ���� ������� �����ϰ� �ݺ��� ���� ���� ����
	/*for (int i = 0; i < 10; i++) {
		printf("�ݺ��� ���� : %d\n", i);
		continue;
		printf("�ݺ��� ���� : %d\n", i);
	}
	*/
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0 && i != 0) {
			continue;
		}
		if (i == 7)
			break;
		printf("�ݺ��� ���� : %d\n", i);
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("���� for�� : i = %d , j = %d\n", i, j);
		}
	}

	// ������ 2 ~ 9�� ���
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%dx%d=%2d    ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}