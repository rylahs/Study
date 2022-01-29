//1. void 함수명()
//2. void 함수명(매개변수)
//3. 리턴타입 함수명(void)
//4. 리턴타입 함수명(매개변수)

// 콘솔 프로그램 : 커맨드 창에서 동작하는 프로그램
// GUI 프로그램 : 그래픽 환경에서 동작하는 프로그램

// 지역변수(로컬 변수), 전역 변수(글로벌 변수)
// 지역변수 : {}괄호 안에 선언(생성)되는 변수
//            {}괄호 안에서만 사용 가능
// 전역변수 : 함수{} 중괄호 밖에 선언된 변수
/*
#include <stdio.h>
int num = 100; // 전역변수
void func1()
{
	int num = 200;
	printf("func1 num : %d\n, num);
}

void func2()
{
	printf("func2 num : %d\n, num);
}
int main()
{
	int num = 1000;
	func1();
	func2();
	printf("main num : %d\n", num);
	return 0;
}
*/
//1. 3개의 숫자를 입력받아서 크기가 큰 순서대로 출력하는 프로그램.
//
//주의) 정렬 알고리즘 또는 배열을 사용하지 말고 IF 문으로만 해결 바람.
//
//
//조건1) 3개의 숫자는 main() 에서 입력 받음.
//조건2) 3개의 입력받은 숫자를 매개변수로 전달하여 크기가 큰 순서대로 출력하는
//메쏘드를 작성.﻿
//조건3) 5, 20, 15를 입력받으면, 20 - 15 - 5 형식으로 출력하기. -- > 내림 차순 정렬
//
// 
// 출처 : https://blog.naver.com/hack4ork/221671486484

//#include <stdio.h>
//void maxPrint(int a, int b, int c)
//{
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (b > c)
//			{
//				printf("%d - %d - %d\n", a, b, c);
//			}
//			else { // c >= b
//				printf("%d - %d - %d\n", a, c, b);
//			}
//		}
//		else // c >= a
//		{
//			printf("%d - %d - %d\n", c, a, b);
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			if (c > a)
//			{
//				printf("%d - %d - %d\n", b, c, a);
//			}
//			else { // a >= c
//				printf("%d - %d - %d\n", b, a, c);
//			}
//		}
//		else // 
//		{
//			printf("%d - %d - %d\n", c, b, a);
//		}
//	}
//}
//int main(void)
//{
//	printf("----------------------------\n");
//	printf("크기가 큰 순서대로 출력하는 프로그램\n");
//	printf("----------------------------\n");
//
//	int number_input_a, number_input_b, number_input_c;
//	printf("숫자 1 입력 : ");
//	scanf_s("%d", &number_input_a);
//	printf("숫자 2 입력 : ");
//	scanf_s("%d", &number_input_b);
//	printf("숫자 3 입력 : ");
//	scanf_s("%d", &number_input_c);
//
//	maxPrint(number_input_a, number_input_b, number_input_c);
//
//	return 0;
//}


//2. 숫자2개와 사칙연산자를 입력받아서 동작하는 간단한 계산기 프로그램.
//조건1) 숫자2개와 사칙연산자(+, -, *, / )는 main()에서 입력받음.
//조건2) 숫자2개와 사칙연산을 메쏘드에 매개변수로 전달.
//조건3) 계산 결과값은 메쏘드에서 리턴값을 받아서 출력하기.
//
// 출처 : https://blog.naver.com/hack4ork/221671486484
// 
//#include <stdio.h>
//
//void title_d()
//{
//	printf("----------------------------\n");
//	printf("간단한 계산기 v1.3\n");
//	printf("----------------------------\n");
//}
//double calc4(double a, double b, char ch)
//{
//	switch (ch)
//	{
//	case '+':
//		printf("%.0lf + %.0lf = ", a, b);
//		return a + b;
//
//	case '-':
//		printf("%.0lf - %.0lf = ", a, b);
//		return a - b;
//
//	case '*':
//		printf("%.0lf * %.0lf = ", a, b);
//		return a * b;
//
//	case '/':
//		printf("%.1lf / %.1lf = ", a, b);
//		return (double)a / b;
//
//	default:
//		printf("잘못된 문자가 입력되었습니다.\n");
//		return -1;
//	}
//}
//
//int main(void)
//{
//	title_d();
//
//	double num5, num6;
//	char chC4;
//	printf("계산할 숫자를 입력해주세요\n");
//	printf("숫자 1 입력 : ");
//	scanf_s("%lf", &num5);
//	printf("숫자 2 입력 : ");
//	scanf_s("%lf", &num6);
//	printf("계산할 연산을 입력해주세요(+, -, *, /) : ");
//	scanf_s(" %c", &chC4, sizeof(char));
//
//	double resultD;
//
//	resultD = calc4(num5, num6, chC4);
//	printf("%.4lf\n", resultD);
//
//	return 0;
//}



//
//3. 홀수, 짝수 구분하는 프로그램.
//조건1) 10개의 숫자를 저장하기위한 배열 생성.
//조건2) 랜덤하게 10개의 숫자를 main()에서 배열에 저장.
//조건3) 랜덤한 값을 가지는 배열을 매개변수로 전달하여 홀, 짝수를 구분하는 메쏘드 작성.
//
// 출처 : https://blog.naver.com/hack4ork/221671486484

//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void oddEven(int *arr, int size)
//{
//	printf("\n홀수 : ");
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] % 2 == 1)
//			printf("%2d ", arr[i]);
//	}
//	printf("\n짝수 : ");
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] % 2 == 0)
//			printf("%2d ", arr[i]);
//	}
//}
//int main()
//{
//	int random_array[10] = { 0, };
//	int arr_size = 10;
//	srand((unsigned)time(NULL));
//	
//	for (int i = 0; i < arr_size; i++) {
//		random_array[i] = (rand() % 45) + 1;
//	}
//	printf("----------------------------\n");
//	printf("랜덤 배열을 홀수 짝수 구분 프로그램\n");
//	printf("----------------------------\n");
//	printf("랜덤 배열 : ");
//	for (int i = 0; i < arr_size; i++) {
//		printf("%d ", random_array[i]);
//	}
//	printf("\n");
//	oddEven(random_array, arr_size);
//
//	return 0;
//}

//
//4. 국, 영, 수 점수를 입력받아서 총점, 평균값을 구하는 프로그램.
//조건1) 점수 입력은 main() 에서 입력 받음.
//조건2) 입력받는 점수는 0 ~100 사이의 숫자만 입력받도록 조건 체크하기.
//
//-- > 간단하게 한번만 체크하면 됨(사용자가 실수로 잘못입력하면 에러메시지 출력하고 종료 처리)
//조건3) 국, 영, 수 점수를 각각의 매개변수로 전달하여 총점, 평균값을 출력하는 메쏘드 작성.
//
//조건4) 조건3까지 테스트완료 이후에 잘못입력값 체크를 확장하기(실수로 입력하면 재입력 받을수 있도록 처리)
//
//-- > 시간적인 여유가 있으면 해보고 그렇지 않으면 패스하기 바람.
// 출처 : https://blog.naver.com/hack4ork/221671486484
//#include <stdio.h>
//int calcSum(int a, int b, int c)
//{
//	return a + b + c;
//}
//double calcAvg(int a, int b, int c)
//{
//	return (a + b + c) / 3;
//}
//
//int main()
//{
//	int kor_score, eng_score, math_score, sum_score = 0;
//	double avg_score;
//	printf("----------------------------\n");
//	printf("성적 처리 프로그램\n");
//	printf("----------------------------\n");
//	printf("국어 성적 입력 : ");
//	while (1) {
//		scanf_s("%d", &kor_score);
//		if (kor_score >= 0 && kor_score <= 100)
//			break;
//		else
//		{
//			printf("성적 입력이 잘못되었습니다. 다시 입력해주세요.\n");
//			printf("국어 성적 입력 : ");
//		}
//	}
//	printf("영어 성적 입력 : ");
//	while (1) {
//		scanf_s("%d", &eng_score);
//		if (eng_score >= 0 && eng_score <= 100)
//			break;
//		else
//		{
//			printf("성적 입력이 잘못되었습니다. 다시 입력해주세요.\n");
//			printf("영어 성적 입력 : ");
//		}
//	}
//	printf("수학 성적 입력 : ");
//	while (1) {
//		scanf_s("%d", &math_score);
//		if (math_score >= 0 && math_score <= 100)
//			break;
//		else
//		{
//			printf("성적 입력이 잘못되었습니다. 다시 입력해주세요.\n");
//			printf("수학 성적 입력 : ");
//		}
//	}
//	
//	sum_score = calcSum(kor_score, eng_score, math_score);
//	printf("총점 : %d\n", sum_score);
//
//	avg_score = calcAvg(kor_score, eng_score, math_score);
//	printf("평균 : %.2lf\n", avg_score);
//
//	return 0;
//}


//
//5. 1개의 숫자를 입력받아서 구구단 출력하는 프로그램.
//조건1) 숫자 입력은 main() 에서 입력 받음.
//조건2) 3을 입력받으면 3단 출력, 5를 입력받으면 5단을 출력.
//조건3) 숫자를 매개변수로 전달하여 구구단을 출력하는 메쏘드 작성.
// 출처 : https://blog.naver.com/hack4ork/221671486484

//#include <stdio.h>
//void printGugu(int a)
//{
//	for (int i = 1; i < 10; i++)
//	{
//		printf("%2d x%2d = %2d\n", a, i, a * i);
//	}
//}
//int main()
//{
//	printf("----------------------------\n");
//	printf("구구단 출력 프로그램\n");
//	printf("----------------------------\n");
//	printf("몇단이 궁금하나요? : ");
//	int input_gugu;
//	scanf_s("%d", &input_gugu);
//	printGugu(input_gugu);
//}
//
//
//6. 간단한 로또 프로그램.
//조건1) 동일한 숫자가 발생하지 않도록 처리 바람.
//(할수있는데까지 꼭 고민해보시고 힘들면 중복처리 무시!)
//조건2) 메쏘드에서 로또 번호를 만들고 배열에 6개의 번호를 저장하여 리턴
//조건3) main()에서 로또 번호가 들어있는 배열를 리턴받아서 출력하기
// 출처 : https://blog.naver.com/hack4ork/221671486484
//- 메쏘드에서 로또 배열 출력하는것이 아님!
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//int* lotto(int l_arry[], int size)
//{
//	for (int i = 0; i < size; i++) {
//		l_arry[i] = (rand() % 45) + 1;
//		for (int j = 0; j < i; j++)
//		{
//			if (l_arry[j] == l_arry[i])
//				i--;
//		}
//	}
//	return l_arry;
//}
//int main()
//{
//	int lotto_array[6] = { 0, };
//	int arr_size = sizeof(lotto_array) / sizeof(int);
//	srand((unsigned)time(NULL));
//		
//	printf("----------------------------\n");
//	printf("로또 프로그램\n");
//	printf("----------------------------\n");
//	printf("로또 번호 : ");
//	lotto(lotto_array, arr_size);
//	for (int i = 0; i < arr_size; i++) {
//		printf("%d ", lotto_array[i]);
//	}
//	printf("\n");
//	
//	return 0;
//}
//
//
//7. 1 ~100까지의 합을 구하는 프로그램.
//조건1) 메쏘드에서 짝수들의 합과 홀수들의 합을 배열에 저장.
//조건2) 메쏘드에서 짝수합과 홀수합을 배열에 저장하고 리턴하기.
//조건3) main()에서 메쏘드로부터 배열을 리턴받아 홀수합, 짝수합 출력하기.
// 출처 : https://blog.naver.com/hack4ork/221671486484
//#include <stdio.h>
//int* numberRet(int a[])
//{
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 2 == 0)
//		{
//			a[0] += i;
//		}
//		else
//		{
//			a[1] += i;
//		}
//	}
//	return a;
//}
//int main()
//{
//	printf("----------------------------\n");
//	printf("1 ~ 100 홀수 합 짝수 합 프로그램\n");
//	printf("----------------------------\n");
//	int numArr[2] = { 0, };
//	numberRet(numArr);
//	printf("홀수 합 : %d\n", numArr[1]);
//	printf("짝수 합 : %d\n", numArr[0]);
//}
//
//
//8. 구구단 2~9단까지 전체 출력중에 홀수단만 출력하는 프로그램.
//조건1) 홀수단만 출력하는 메쏘드를 작성.
//조건2) 출력 형식은 다음과 같이.
//
//3X1 = 3  5X1 = 5  7X1 = 7  9X1 = 9
//3X2 = 6  5X2 = 10 7X2 = 14 9X2 = 18
//.      .      .      .
//.      .      .      .
//3X9 = 27 5X9 = 45 7X9 = 63 9X9 = 81
// 출처 : https://blog.naver.com/hack4ork/221671486484
//#include <stdio.h>
//void guguOdd()
//{
//	for (int i = 1; i < 10; i++) {
//		for (int j = 2; j < 10; j++) {
//			if (j % 2 == 1)
//				printf("%dx%d = %2d    ", j, i, i * j);
//			else
//				continue;
//		}
//		printf("\n");
//	}
//}
//int main(void)
//{
//	printf("----------------------------\n");
//	printf("홀수 구구단 출력 프로그램\n");
//	printf("----------------------------\n");
//	guguOdd();
//}





//
//9. 3개의 숫자를 입력받아서 최대, 최소값 구하는 프로그램
//조건1) 3개의 숫자는 main()에서 입력 받음.
//조건2) 3개의 숫자를 메쏘드의 매개변수로 전달.
//조건3) 메쏘드에서 최대, 최소값을 구한다음 배열에 저장하여 리턴하기.
//조건4) 반드시 main()에서 배열을 리턴받아 최대, 최대값 출력.
// 출처 : https://blog.naver.com/hack4ork/221671486484

//#include <stdio.h>
//int* maxmin(int a, int b, int c)
//{
//	int* maxmin_arr = (int*)malloc(sizeof(int) * 2);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (b > c)
//			{
//				maxmin_arr[0] = a;
//				maxmin_arr[1] = c;
//				return maxmin_arr;
//			}
//			else { // c >= b
//				maxmin_arr[0] = a;
//				maxmin_arr[1] = b;
//				return maxmin_arr;
//			}
//		}
//		else // c >= a
//		{
//			maxmin_arr[0] = c;
//			maxmin_arr[1] = b;
//			return maxmin_arr;
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			if (c > a)
//			{
//				maxmin_arr[0] = b;
//				maxmin_arr[1] = a;
//				return maxmin_arr;
//			}
//			else { // a >= c
//				maxmin_arr[0] = b;
//				maxmin_arr[1] = c;
//				return maxmin_arr;
//			}
//		}
//		else // c b a
//		{
//			maxmin_arr[0] = c;
//			maxmin_arr[1] = a;
//			return maxmin_arr;
//		}
//	}
//}
//
//int main(void)
//{
//	printf("----------------------------\n");
//	printf("세 수중 MAX와 MIN을 출력하는 프로그램\n");
//	printf("----------------------------\n");
//	int number_input_a, number_input_b, number_input_c;
//	printf("숫자 1 입력 : ");
//	scanf_s("%d", &number_input_a);
//	printf("숫자 2 입력 : ");
//	scanf_s("%d", &number_input_b);
//	printf("숫자 3 입력 : ");
//	scanf_s("%d", &number_input_c);
//
//	int *result = maxmin(number_input_a, number_input_b, number_input_c);
//
//	printf("최대 값 : %d\n", result[0]);
//	printf("최소 값 : %d\n", result[1]);
//	return 0;
//}

//10. 입력 받은 수의 팩토리얼을 구하는 프로그램.
//조건1) 숫자는 main()에서 입력받음.
//조건2) 3을 입력하면 3!(3x2x1), 4를 입력하면 4!(4x3x2x1)이 동작.
//조건3) 재귀함수(메쏘드)로 구현.
//
//#include <stdio.h>
//int factorial(int input)
//{
//	if (input == 1)
//	{
//		return 1;
//	}
//	else
//		return input * factorial(input - 1);
//}
//
//int main(void)
//{
//	printf("----------------------------\n");
//	printf("Factorial을 구하는 프로그램\n");
//	printf("----------------------------\n");
//	int inputF;
//	printf("Input Factorial Num : ");
//	scanf_s("%d", &inputF);
//	printf("%d! = %d\n", inputF, factorial(inputF));
//}
//
//11. 학점을 출력하는 프로그램.
//조건1) 5명의 국, 영, 수 점수는 Random 클래스를 사용하여 랜덤하게 생성.
//조건2) 2차원배열을 생성하여 1번째 학생의 국, 영, 수 점수를 1행1열, 1행2열, 1행3열에 저장.
//조건3) 2번째 학생의 점수는 2행 ~5번째 학생의 점수는 5행에 각각 저장.
//조건4) 5명학생의 점수들을 저장한 배열을 리턴하기.
//조건5) main()에서 배열값을 받아 학생1명씩 대한 총점, 평균, 학점을 출력하기.
//-- > 출력 형식은 자유롭게 생각해서 하되 깔끔하게 처리.
//조건6) 학점 기준 점수
//100 ~90->A학점 출력
//89 ~80->B학점 출력
//79 ~70->C학점 출력
//69 ~60->D학점 출력
//59 ~50->E학점 출력
//49 ~0->F학점


