// ���� 3. ���ڷ� ���޵� ����ŭ�� �Ǻ���ġ ������ ����ϴ� �Լ��� �����غ���.
// ���� �� ���α׷� ����ڰ� 5�� �Է��ϸ� 0�������� �����ؼ� �� 5���� �Ǻ���ġ ������ ����ؾ� �Ѵ�.
// ����� �Ǻ���ġ ������ ������ ����.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 .......
#include <stdio.h>
/*
// �ǽ� ��� �ڵ�
void showFiboSeries(int n) {
	//�Ǻ���ġ ������ ���� �˰���(����)
	int f1 = 0, f2 = 1, temp;
	// if n == 1
	if (n == 1) {
		printf("%d", f1);
	}
	else {
		printf("%d, %d", f1, f2);
	}
	for (int i = 0; i < n - 2; i++) {
		temp = f2;
		f2 = f1 + f2;
		f1 = temp;
		printf(", %d", f2);
	}
}
*/
void fibo(int n) 
{
	long long fiboArray[3] = { 0, 1, 1 };
	int fiboCount = 1;
	if (n == 1) {
		printf("%llu ", fiboArray[n - 1]);
		return;
	}
	if (n == 2) {
		printf("%llu %llu ", fiboArray[n - 2],  fiboArray[n - 1]);
		return;
	}
	while (fiboCount != n) {
		if (fiboCount < 3) {
			for (int i = 0; i < n; i++) {
				printf("%llu ", fiboArray[i]);
				fiboCount++;
				if (fiboCount > 3) {
					fiboCount--;
					break;
				}

			}
		}
		else {
			fiboArray[0] = fiboArray[1];
			fiboArray[1] = fiboArray[2];
			fiboArray[2] = fiboArray[0] + fiboArray[1];
			printf("%llu ", fiboArray[2]);
			fiboCount++;
			if (fiboCount % 10 == 0)
				printf("\n");
		}
	}
}
int main(void) 
{
	int fiboInput;
	printf("�Ǻ���ġ ������ ����ϴ� ���α׷� �Դϴ�.\n");
	printf("Input N : ");
	scanf_s("%d", &fiboInput);

	fibo(fiboInput);
	//showFiboSeries(fiboInput);


	return 0;
}