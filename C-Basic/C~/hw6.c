#include <stdio.h>
#include <math.h>
#include <time.h>

int main(void) {
	// 1. 다음 1차원 배열의 합과 평균을 구하세요
	//	 조건1) 배열 초기값-- > 20, 34, 22, 14, 36, 23, 67
	// https://blog.naver.com/hack4ork/221671484521
	
	int arrayNum1[] = { 20, 34, 22, 14, 36, 23, 67 };
	int sumNum1 = 0;
	for (int i = 0; i < 7; i++) {
		sumNum1 += arrayNum1[i];
	}
	printf("----------------------------------------\n");
	printf("================= 문제 1 ===============\n");
	printf(" 배열 초기값-- > 20, 34, 22, 14, 36, 23, 67\n");
	printf(" 배열의 합을 구하는 문제\n");
	printf("----------------------------------------\n");
	printf("arrayNum 1 Sum : %d\n", sumNum1); // 216
	
	//2. 1 ~100까지의 수를 1차원 배열에 저장.
	//	조건1) 저장된 배열에서 5의 배수만 출력하세요.
	//	조건2) 배열의 위치가 90번째 일때 출력을 중지함.
	// https://blog.naver.com/hack4ork/221671484521
	printf("\n\n----------------------------------------\n");
	printf("================= 문제 2 ===============\n");
	printf(" 1 ~ 100까지 배열에 저장합니다.\n");
	printf(" 배열의 위치가 5의 배수만 출력합니다.\n");
	printf("----------------------------------------\n");

	int arrayNum2[100] = { 0, };
	for (int i = 0; i < 100; i++) {
		arrayNum2[i] = i + 1; // 1 ~ 100 저장
		if (arrayNum2[i] % 5 == 0 && i < 90)  // 5의 배수이면서 90번째 0~89는 90번째 출력 중지
			printf("%2d ", arrayNum2[i]);
	}
	/*3. 아래의 데이터를 새로운 배열에 저장한후, 출력하세요.

		조건1) 배열 초기값-- > 10, 20, 30, 40, 50, 60, 70, 80, 90, 100
		조건2) 새로운 배열을 생성하고 100, 90, 80 순으로 저장하여 출력. */
		// https://blog.naver.com/hack4ork/221671484521
	printf("\n\n----------------------------------------\n");
	printf("================= 문제 3 ===============\n");
	printf(" 초기 배열 : 10, 20, 30, 40, 50, 60, 70, 80, 90, 100\n");
	printf(" 새 배열을 생성하고 역순으로 저장해서 출력하는 프로그램\n");
	printf("----------------------------------------\n");
	int arrayNum3[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int arrayNum3Reverse[10];

	for (int i = 9; i >= 0; i--) {
		arrayNum3Reverse[abs(i - 9)] = arrayNum3[i]; // 절대값으로 역순으로 저장
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arrayNum3Reverse[i]);
	}
	printf("\n");
	/*4. 아래의 이차원 배열을 출력하세요.

	조건1) { {1, 2}, { 2, 4, 6 }, { 3, 6 }, { 4, 8, 10, 12 }, { 10 }}
	조건2) 반드시 아래와 같은 형태로 출력 바람. (2중 루프 사용해야됨)
		arr[0][0] = 1 arr[0][1] = 2
		arr[1][0] = 2 arr[1][1] = 4 arr[1][2] = 6
		arr[2][0] = 3 arr[2][1] = 6
		arr[3][0] = 4 arr[3][1] = 8 arr[3][2] = 10 arr[3][3] = 12
		arr[4][0] = 10 */
	// https://blog.naver.com/hack4ork/221671484521
	printf("\n\n----------------------------------------\n");
	printf("================= 문제 4 ===============\n");
	printf(" 초기 배열 : { {1, 2}, { 2, 4, 6 }, { 3, 6 }, { 4, 8, 10, 12 }, { 10 }}\n");
	printf(" 배열 값을 출력하는 프로그램\n");
	printf("----------------------------------------\n");
	int arrayNum4[5][4] = {
		{ 1, 2 }, 
		{ 2, 4, 6 }, 
		{ 3, 6 }, 
		{ 4, 8, 10, 12 }, 
		{ 10 } 
	};

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (arrayNum4[i][j] > 0) {
				printf("arr[%d][%d] = %d   ", i, j, arrayNum4[i][j]);
			}
		}
		printf("\n");
	}
	/*5. 아래 행렬의 덧셈을 구하세요.

		조건1) 1 ~9까지의 행렬을 2차원 배열에 저장하기.
		조건2) 10 ~90까지의 행렬을 2차원 배열에 저장하기
		조건3) 두 행렬을 덧셈하여 새로운 2차원 배열에 저장하고 결과값들을 출력하기.
		조건4) 결과값은 아래와 같은 형태로 출력 하기.
		11 22 33
		44 55 66
		77 88 99



		ex) 행렬의 덧셈을 할 자료들
		1 2 3   10 20 30
		4 5 6 + 40 50 60
		7 8 9   70 80 90*/
	// https://blog.naver.com/hack4ork/221671484521
	printf("\n\n----------------------------------------\n");
	printf("================= 문제 5 ===============\n");
	printf(" 행렬의 덧셈 \n");
	printf(" 행렬 1(3x3) : 1 ~ 9\n 행렬2(3x3) : 10 20 30 ... 90 \n");
	printf(" 두 행렬의 합을 배열에 저장해서 출력\n");
	printf("----------------------------------------\n");
	int arrayNum5One[3][3];
	int arrayNum5Ten[3][3];
	int arrayNum5Sum[3][3];
	int inputOne = 1, inputTen = 10;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arrayNum5One[i][j] = inputOne++;
			arrayNum5Ten[i][j] = inputTen;
			inputTen += 10;
			arrayNum5Sum[i][j] = arrayNum5One[i][j] + arrayNum5Ten[i][j];
			printf("%d   ", arrayNum5Sum[i][j]);
		}
		printf("\n");
	}
	/*6. 구구단의 결과값을 이차원 배열에 저장한후, 결과값을 출력하세요
		조건1) 결과값을 저장할 새로운 이차원 배열을 생성.
		조건2) 연산이 실행될때 결과값들을 저장.

		2X1 = 2  3X1 = 3  4X1 = 4  5X1 = 5  6X1 = 6  7X1 = 7  8X1 = 8  9X1 = 9
		2X2 = 4  3X2 = 6  4X2 = 8  5X2 = 10 6X2 = 12 7X2 = 14 8X2 = 16 9X2 = 18
		.      .      .      .      .      .      .      .
		.      .      .      .      .      .      .      .
		2X9 = 18 3X9 = 27 4X9 = 36 5X9 = 45 6X9 = 54 7X9 = 63 8X9 = 72 9X9 = 81*/
		// https://blog.naver.com/hack4ork/221671484521
	printf("\n\n----------------------------------------\n");
	printf("================= 문제 6 ===============\n");
	printf(" 구구단 \n");
	printf(" 2x1 = 2  3x1 = 3 이런식으로 9x9까지 출력하기 \n");
	printf("----------------------------------------\n");
	int arrayNum6[9][8];
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			arrayNum6[i - 1][j - 2] = i * j;
			printf("%dx%d = %2d   ", j, i, arrayNum6[i - 1][j - 2]);
		}
		printf("\n");
	}
	/*7. 다음 메뉴를 가지는 프로그램 작성하기.
		---------------------------- -
		파일 제어 프로그램 v1.1
		---------------------------- -
		1. 이름 생성하여 파일에 저장하기
		2. 파일에서 이름 읽어오기
		3. 프로그램 종료
		---------------------------- -
		메뉴 선택 :

	조건1) 1차원 배열 초기값
	이름의 1번째-- > "김", "박", "이", "최", "장"
		이름의 2번째-- > "바", "사", "아", "자", "차"
		이름의 3번째-- > "가", "나", "다", "라", "마"



		조건2) 위의 값을 각각 랜덤하게 발생하도록 하여 50개의 풀네임을 생성하여
		배열에 저장.

		- 순서1) last에서 랜덤하게 1개의 배열 요소값을 선택
		- 순서2) first에서 랜덤하게 1개의 배열 요소값을 선택
		- 순서3) mid에서 랜덤하게 1개의 값을 선택
		- 순서4) 풀네임을 저장할 배열을 생성
		- 순서5) 랜덤하게 생성된 3개의 값들을 합쳐서 하나의 전체 이름으로 생성.



		조건3) 생성된 풀네임 50개를 파일에 저장.
		조건4) 파일에 저장된 이름들을 읽어서 출력할때는 라인별로 출력 바람.*/
		// https://blog.naver.com/hack4ork/221671484521

	/*8. 1 ~45 의 숫자를 랜덤으로 발생시켜 로또 프로그램 만들기.
		조건1) for, while, do - while 사용
		조건2) 동일한 숫자가 발생하지않도록 처리하기.
		---------------------------- -
		간단한 로또 프로그램 v1.1
		---------------------------- -
		23  7  10  11  39  44*/
		// https://blog.naver.com/hack4ork/221671484521
	printf("\n\n----------------------------------------\n");
	printf("================= 문제 8 ===============\n");
	printf(" 간단한 로또 프로그램 v1.1 \n");
	printf("----------------------------------------\n");
	srand(time(NULL)); // 난수 초기화
	int arrayNum8[6] = { 0, };
	int j = 0;
	for (int i = 0; i < 6; i++) {
		arrayNum8[i] = (rand() % 45) + 1;
		for (int j = 0; j < i; j++) {
			if (arrayNum8[i] == arrayNum8[j]) {
				i--;
			break;
			}
		}
	}

	for (int i = 0; i < 6; i++)
		printf("%2d  ", arrayNum8[i]);
	printf("\n");



	return 0;
}