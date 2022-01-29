// ���� 1. �� ���� ������ ���ڷ� ���� �޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ� �Լ��� �����غ���.
//        �׸��� �� �Լ����� ȣ���ϴ� ������ main �Լ��� �ۼ��غ���.
// ���� 2. ����(Celsius)�µ��� �Է��ϸ� ȭ��(Fahrenheit)�µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ���
//		  �� �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahTocel�̶�� �̸��� �Լ��� �����ϰ� �� �� �Լ��� ȣ���ϴ� ������ �ϼ��غ���.
//		  ����� ������ ȭ������ �µ���ȯ ������ ������ ����.
// Fah = 1.8 * Cel + 32

// P248 �������̵�� ��������

#include <stdio.h>
#include <math.h>
double FahToCel(double Fah) {
	return (Fah - 32) / 1.8;
}
double CelToFah(double Cel) {
	return 1.8 * Cel + 32;
}

int maxNum(int a, int b, int c) {
	if (a > b)
		return (a > c) ? a : c;
	else
		return (b > c) ? b : c;
}

int minNum(int a, int b, int c) {
	if (a < b)
		return (a < c) ? a : c;
	else
		return (b < c) ? b : c;
}
int gcd(int a, int b) {
	//if (b == 0)
	//	return a;
	//else {
	//	return gcd(b, a % b);
	//}

	while(b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int primeNumSearch(int n) {
	if (n < 2) {
		return 0;
	}
	if (n % 2 == 0) {
		return (n == 2) ? 1 : 0;
	}
	else {
		for (int i = 3; i <= sqrt(n); i += 2) {
			if (n % i == 0) {
				return 0;
			}
		}

		return 1;
	}

}
int searchMultCount(int n) {
	int number = 2;
	int k;
	if (n == 1)
		return 0;
	else {
		for (k = 1; number <= n; k++)
			number *= 2;

		return k - 1;
	}
}

int recurMult(int n) {
	if (n == 0)
		return 1;
	if (n == 1)
		return 2;
	else
		return 2 * recurMult(n - 1);
}
int main(void) {
// ���� 1. �� ���� ������ ���ڷ� ���� �޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ� �Լ��� �����غ���.
//        �׸��� �� �Լ����� ȣ���ϴ� ������ main �Լ��� �ۼ��غ���.
	/*int inputNum1, inputNum2, inputNum3;
	printf("�� ������ �Է¹޾� ���� ū ���� ���� ���� ���� ����մϴ�.\n");
	printf("�� ���� �Է����ּ��� : ");
	scanf_s("%d%d%d", &inputNum1, &inputNum2, &inputNum3);
	printf("���� ū ���� %d �Դϴ�.\n", maxNum(inputNum1, inputNum2, inputNum3));
	printf("���� ���� ���� %d �Դϴ�.\n", minNum(inputNum1, inputNum2, inputNum3));*/




// ���� 2. ����(Celsius)�µ��� �Է��ϸ� ȭ��(Fahrenheit)�µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ���
//		  �� �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahTocel�̶�� �̸��� �Լ��� �����ϰ� �� �� �Լ��� ȣ���ϴ� ������ �ϼ��غ���.
//		  ����� ������ ȭ������ �µ���ȯ ������ ������ ����.
// Fah = 1.8 * Cel + 32
	double Cel, Fah;
	int selectMode;

	printf("����-> ȭ�� �µ� ��ȯ or ȭ�� -> ���� ��ȯ�ϴ� ���α׷��Դϴ�.\n");
	printf("���ϴ� ������ �������ּ��� (1. ����-> ȭ�� �µ�, 2. ȭ�� -> ���� �µ�) : ");
	scanf_s("%d", &selectMode);

	if (selectMode == 1) {
		printf("���� �µ��� �Է����ּ��� : ");
		scanf_s("%lf", &Cel);

		printf("%.2lf ���� �µ� -> %.2lf ȭ���µ� �Դϴ�.\n", Cel, CelToFah(Cel));
	}
	else if (selectMode == 2) {
		printf("ȭ�� �µ��� �Է����ּ��� : ");
		scanf_s("%lf", &Fah);

		printf("%.2lf ���� �µ� -> %.2lf ȭ���µ� �Դϴ�.\n", Fah, FahToCel(Fah));

	}
	
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	// ���� 1. 10���� ������ �Է¹޾Ƽ� 16������ ����ϴ� ���α׷��� �ۼ��غ���
	int tenToSixteen;
	printf("10���� �Է� : ");
	scanf_s("%d", &tenToSixteen);
	printf("16���� : %x ", tenToSixteen);
	// ���� 2. ���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ� �������� ����ϴ� ���α׷��� �ۼ��غ���.
	// ���� �� ���α׷� ����ڰ� 3�� 5�� �Է��ϸ� 3,4,5���� ��µǾ���ϰ� 2�� 4�� �Է��ϸ� 2,3,4���� ��µǾ�� �Ѵ�.
	// �Ѱ��� ������ �ִ�. ����ڴ� �� ���� ���ڸ� �Է��� �� �Է� ������ �����ο��� �Ѵ�. ��, 3�� 5�� �Է��ϰ� 5�� 3�� �Է��ϰ� ���α׷��� ���� ����� ����ؾ� �Ѵ�.
	int guguInputA, guguInputB;
	printf("\n\n\n�������� ����� ���� ������ �Է����ּ���\n");
	printf("Input 1 : ");
	scanf_s("%d", &guguInputA);
	printf("Input 2 : ");
	scanf_s("%d", &guguInputB);

	if (guguInputA > guguInputB) {
		int temp = guguInputA;
		guguInputA = guguInputB;
		guguInputB = temp;
	}

	for (int i = guguInputA; i <= guguInputB; i++) {
		if (i > 9) {
			printf("�������� ������ �ʰ��Ͽ� �����մϴ�. \n");
			break;
		}
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %2d   ", i, j, i * j);
		}
		printf("\n");

	}
	// ���� 3. �� ���� ������ �Է� �޾Ƽ� �ִ� ����� GCD�� ���ϴ� ���α׷��� �ۼ��غ���.
	// ��Ŭ���� ȣ����
	// �� �� A B�� ������ A�� �� ũ�ٴ� �����Ͽ� A % B�� �ؼ� �������� 0�� �ɶ��� B ���� �ִ������� �Ǵ� ���̴�.
	// ��͹��� Ȱ���ϸ� ���� �������������� ���ڰ� Ŀ�� ��쿡 �޸𸮸� ���� ��� ���� ����� �ִ�.

	int inputGCD_a, inputGCD_b;
	printf("\n\n�� ���� �ִ������� ���ϴ� ���α׷��Դϴ�.\n");
	printf("Input NumA : ");
	scanf_s("%d", &inputGCD_a);
	printf("Input NumB : ");
	scanf_s("%d", &inputGCD_b);

	printf("%d�� %d�� �ִ� ������� %d �Դϴ�.\n", inputGCD_a, inputGCD_b, gcd(inputGCD_a, inputGCD_b));

	// ���� 4. ���ڰ� �����ϴ� �� �� �ϳ��� �ݿ��� ���� ��ٱ濡 DVD�� ��ȭå�� �ܶ� ������, ���� ���ۿ� ����� �������Ÿ��� �簡���� ���� ���� ���̴�. 
	// ������ �ݿ����̴�. ���� ������ �ָӴϿ��� 5õ���� �ִ�. DVD ������ ������ 3,500���� ���´�. 
	// ���ۿ� ����� ũ����(500��), �����(700��), �ݶ�(400��)�� ����Ѵ�. 
	// �ܵ��� �ϳ��� ������ �ʰ� �� ������ ������ �ϳ� �̻� �ݵ�� �����Ϸ��� ��� ���Ÿ� �����ؾ� �ϰڴ°�? 
	// ���� ���⿡�� ���� ���� ����� ���� ���� ���̴�. ���ڰ� ��� ������ �� �� �ִ��� �������� ������ �ֱ� �ٶ���.

	int currentMoney = 3500;
	int breadPrice = 500, snackPrice = 700, cokePrice = 400;
	int countNumber = 0;

	for (int i = 1; i < currentMoney / breadPrice; i++) {
		for (int j = 1; j < currentMoney / snackPrice; j++) {
			for (int k = 1; k < currentMoney / cokePrice; k++) {
				if (currentMoney == breadPrice * i + snackPrice * j + cokePrice * k) {
					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", i, j, k);
				}
			}
		}
	}
	// ���� 5. 10���� �Ҽ�(Prime Number)�� ����ϴ� ���α׷��� �ۼ��� ����. 
	// ����� ���� num�� 1�� num���� �ۿ� �������� �ʴ´ٸ� �̴� �Ҽ��� �ش��Ѵ�. 
	// ���� 3�� �Ҽ��̴�. �׷��� 4�� �Ҽ��� �ƴϴ�. 1, 2, 4�� �������� �����̴�.
	int primeNumberSearchInput;
	printf("�Ҽ��� ������ �Է��ϼ��� : ");
	scanf_s("%d", &primeNumberSearchInput);
	int primeCount = 0;
	int primeSearchNum = 1;
	while (primeCount != primeNumberSearchInput) {
		if (primeNumSearch(primeSearchNum) == 1) {
			primeCount++;
			printf("%d ", primeSearchNum);
			primeSearchNum++;
			continue;
		}
		else {
			primeSearchNum++;
			continue;
		}
	}
	printf("\n\n");

	// ���� 6. ���α׷� ����ڷκ��� ��(second)�� �Է� ���� �Ŀ� �̸� [��, ��, ��]�� ���·� ����ϴ� ���α׷��� �ۼ��غ���.
	// ������ ��
	// ��(second �Է�) : 3615
	// [h : 1, m : 0, s : 15]
	printf("�ʸ� ��, ��, �ʷ� ��Ÿ���ִ� ���α׷��Դϴ�.\n");
	printf("�ʸ� �Է����ּ��� : ");
	int inputSeconds;
	scanf_s("%d", &inputSeconds);
	int outputHour = 0, outputMin = 0, outputSeconds = 0;
	outputHour = inputSeconds / 3600;
	outputMin = inputSeconds % 3600 / 60;
	outputSeconds = inputSeconds % 3600 % 60;

	printf("[h:%d, m:%d, s:%d]\n", outputHour, outputMin, outputSeconds);

	// ���� 7. ���α׷��� ����ڷκ��� ���� n�� �Է� �޴´� �׸��� ���� ������ �����ϴ� k�� �ִ� ���� ����ؼ� ����ϴ� ���α׷��� �ۼ�����.
	// ������ ��
	// ��� n �Է� : 256
	// ������ �����ϴ� k�� �ִ밪�� 8
	int inputNumber_Search;
	printf("��� n �Է� : ");
	scanf_s("%d", &inputNumber_Search);
	printf("������ �����ϴ� k�� �ִ밪�� %d\n", searchMultCount(inputNumber_Search));


	// ���� 8. 2�� .n���� ���ϴ� �Լ��� ��������� ��������.
	int inputMultNum;
	printf("���� n �Է� : ");
	scanf_s("%d", &inputMultNum);

	printf("2�� %d���� %d\n\n", inputMultNum, recurMult(inputMultNum));
	return 0;
}