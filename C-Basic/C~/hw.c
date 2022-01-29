// 문제 1. 세 개의 정수를 인자로 전달 받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 정의해보자.
//        그리고 이 함수들을 호출하는 적절한 main 함수도 작성해보자.
// 문제 2. 섭씨(Celsius)온도를 입력하면 화씨(Fahrenheit)온도를 반환하는 CelToFah라는 이름의 함수와
//		  그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahTocel이라는 이름의 함수를 정의하고 이 두 함수를 호출하는 예제를 완성해보자.
//		  참고로 섭씨와 화씨간의 온도변환 공식은 다음과 같다.
// Fah = 1.8 * Cel + 32

// P248 오렌지미디어 도전과제

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
// 문제 1. 세 개의 정수를 인자로 전달 받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 정의해보자.
//        그리고 이 함수들을 호출하는 적절한 main 함수도 작성해보자.
	/*int inputNum1, inputNum2, inputNum3;
	printf("세 정수를 입력받아 가장 큰 값과 가장 작은 값을 출력합니다.\n");
	printf("세 수를 입력해주세요 : ");
	scanf_s("%d%d%d", &inputNum1, &inputNum2, &inputNum3);
	printf("가장 큰 수는 %d 입니다.\n", maxNum(inputNum1, inputNum2, inputNum3));
	printf("가장 작은 수는 %d 입니다.\n", minNum(inputNum1, inputNum2, inputNum3));*/




// 문제 2. 섭씨(Celsius)온도를 입력하면 화씨(Fahrenheit)온도를 반환하는 CelToFah라는 이름의 함수와
//		  그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahTocel이라는 이름의 함수를 정의하고 이 두 함수를 호출하는 예제를 완성해보자.
//		  참고로 섭씨와 화씨간의 온도변환 공식은 다음과 같다.
// Fah = 1.8 * Cel + 32
	double Cel, Fah;
	int selectMode;

	printf("섭씨-> 화씨 온도 변환 or 화씨 -> 섭씨 변환하는 프로그램입니다.\n");
	printf("원하는 연산을 선택해주세요 (1. 섭씨-> 화씨 온도, 2. 화씨 -> 섭씨 온도) : ");
	scanf_s("%d", &selectMode);

	if (selectMode == 1) {
		printf("섭씨 온도를 입력해주세요 : ");
		scanf_s("%lf", &Cel);

		printf("%.2lf 섭씨 온도 -> %.2lf 화씨온도 입니다.\n", Cel, CelToFah(Cel));
	}
	else if (selectMode == 2) {
		printf("화씨 온도를 입력해주세요 : ");
		scanf_s("%lf", &Fah);

		printf("%.2lf 섭씨 온도 -> %.2lf 화씨온도 입니다.\n", Fah, FahToCel(Fah));

	}
	
	else {
		printf("잘못 입력하셨습니다.\n");
	}
	// 도전 1. 10진수 정수를 입력받아서 16진수로 출력하는 프로그램을 작성해보자
	int tenToSixteen;
	printf("10진수 입력 : ");
	scanf_s("%d", &tenToSixteen);
	printf("16진수 : %x ", tenToSixteen);
	// 도전 2. 프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해보자.
	// 예를 들어서 프로그램 사용자가 3과 5를 입력하면 3,4,5단이 출력되어야하고 2와 4를 입력하면 2,3,4단이 출력되어야 한다.
	// 한가지 조건이 있다. 사용자는 두 개의 숫자를 입력할 때 입력 순서에 자유로워야 한다. 즉, 3과 5를 입력하건 5와 3을 입력하건 프로그램은 같은 결과를 출력해야 한다.
	int guguInputA, guguInputB;
	printf("\n\n\n구구단을 출력할 단의 범위를 입력해주세요\n");
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
			printf("구구단의 범위를 초과하여 종료합니다. \n");
			break;
		}
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %2d   ", i, j, i * j);
		}
		printf("\n");

	}
	// 도전 3. 두 개의 정수를 입력 받아서 최대 공약수 GCD를 구하는 프로그램을 작성해보자.
	// 유클리드 호제법
	// 두 수 A B가 있으면 A가 더 크다는 가정하에 A % B를 해서 나머지가 0이 될때의 B 값이 최대공약수가 되는 것이다.
	// 재귀법을 활용하면 쉽게 구현가능하지만 숫자가 커질 경우에 메모리를 많이 잡아 먹을 우려가 있다.

	int inputGCD_a, inputGCD_b;
	printf("\n\n두 수의 최대공약수를 구하는 프로그램입니다.\n");
	printf("Input NumA : ");
	scanf_s("%d", &inputGCD_a);
	printf("Input NumB : ");
	scanf_s("%d", &inputGCD_b);

	printf("%d와 %d의 최대 공약수는 %d 입니다.\n", inputGCD_a, inputGCD_b, gcd(inputGCD_a, inputGCD_b));

	// 도전 4. 필자가 좋아하는 것 중 하나가 금요일 저녁 퇴근길에 DVD나 만화책을 잔뜩 빌리고, 동네 슈퍼에 들려서 군것질거리를 사가지고 집에 들어가는 것이다. 
	// 오늘은 금요일이다. 현재 필자의 주머니에는 5천원이 있다. DVD 한편을 빌리면 3,500원이 남는다. 
	// 슈퍼에 들려서 크림빵(500원), 새우깡(700원), 콜라(400원)를 사려한다. 
	// 잔돈을 하나도 남기지 않고 이 세가지 물건을 하나 이상 반드시 구매하려면 어떻게 구매를 진행해야 하겠는가? 
	// 물론 여기에는 여러 가지 경우의 수가 있을 것이다. 필자가 어떠한 선택을 할 수 있는지 여러분이 제시해 주기 바란다.

	int currentMoney = 3500;
	int breadPrice = 500, snackPrice = 700, cokePrice = 400;
	int countNumber = 0;

	for (int i = 1; i < currentMoney / breadPrice; i++) {
		for (int j = 1; j < currentMoney / snackPrice; j++) {
			for (int k = 1; k < currentMoney / cokePrice; k++) {
				if (currentMoney == breadPrice * i + snackPrice * j + cokePrice * k) {
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", i, j, k);
				}
			}
		}
	}
	// 도전 5. 10개의 소수(Prime Number)를 출력하는 프로그램을 작성해 보자. 
	// 참고로 정수 num이 1과 num으로 밖에 나눠지지 않는다면 이는 소수에 해당한다. 
	// 따라서 3은 소수이다. 그러나 4는 소수가 아니다. 1, 2, 4로 나눠지기 때문이다.
	int primeNumberSearchInput;
	printf("소수의 갯수를 입력하세요 : ");
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

	// 도전 6. 프로그램 사용자로부터 초(second)를 입력 받은 후에 이를 [시, 분, 초]의 형태로 출력하는 프로그램을 작성해보자.
	// 실행의 예
	// 초(second 입력) : 3615
	// [h : 1, m : 0, s : 15]
	printf("초를 시, 분, 초로 나타내주는 프로그램입니다.\n");
	printf("초를 입력해주세요 : ");
	int inputSeconds;
	scanf_s("%d", &inputSeconds);
	int outputHour = 0, outputMin = 0, outputSeconds = 0;
	outputHour = inputSeconds / 3600;
	outputMin = inputSeconds % 3600 / 60;
	outputSeconds = inputSeconds % 3600 % 60;

	printf("[h:%d, m:%d, s:%d]\n", outputHour, outputMin, outputSeconds);

	// 도전 7. 프로그램은 사용자로부터 숫자 n을 입력 받는다 그리고 다음 공식이 성립하는 k의 최대 값을 계산해서 출력하는 프로그램을 작성하자.
	// 실행의 예
	// 상수 n 입력 : 256
	// 공식을 만족하는 k의 최대값은 8
	int inputNumber_Search;
	printf("상수 n 입력 : ");
	scanf_s("%d", &inputNumber_Search);
	printf("공식을 만족하는 k의 최대값은 %d\n", searchMultCount(inputNumber_Search));


	// 도전 8. 2의 .n승을 구하는 함수를 재귀적으로 구현하자.
	int inputMultNum;
	printf("정수 n 입력 : ");
	scanf_s("%d", &inputMultNum);

	printf("2의 %d승은 %d\n\n", inputMultNum, recurMult(inputMultNum));
	return 0;
}