#include <stdio.h>

int main_array(void) {
	// 배열 : 동일한 타입을 가지는 다수의 정보를 저장하는 연속된 공간
	// 숫자 배열 : 숫자만 저장
	// 문자 배열 : 문자만 저장

	// 기본적인 배열 형태
	int arrNum[4]; //Integer형 1차원 배열
	int arr1[100]; // 길이가 100인 int 타입형 1차원 배열 arr1
	double arr2[10]; // 길이가 10인 double 타입형 1차원 배열 arr2
	char arr3[5]; // 길이가 5인 char형 1차원 배열

	arrNum[0] = 10; // 배열 arrNum의 [0]번째 주소에 10을 대입
	arrNum[1] = 20;
	arrNum[2] = 30;
	arrNum[3] = 40;
	for (int i = 0; i < 4; i++)
		printf("arrNum[%d]의 값 : %d\n", i, arrNum[i]);
	printf("\n");

	for (int i = 0; i < 100; i++) {
		arr1[i] = i + 1; // 1부터 100까지 배열에 저장
		printf("arr1[%d]의 배열 값 : %d\n", i, arr1[i]);
	}

	// 배열 선언과 초기화
	int arr4[5] = { 1, 2, 3, 4, 5 };
	// arr4의 4번째(index : 3) 위치의 값 출력
	printf("arr4[%d] = %d\n", 3, arr4[3]);

	for (int i = 0; i < 5; i++) {
		printf("arr4[%d] : %d\n", i, arr4[i]);
	}

	// 초기값 : 쓰레기(더미)값이 발생하는 것을 막기 위해서 사용
	// 차례대로 1, 2가 저장되고 나머지 빈 공간은 0으로 채워짐.
	int arr5[10] = { 1, 2 };
	int arr6[10] = { 0, };

	char str1[6] = { 'H', 'E', 'L', 'L', 'O', '\0'};
	char str2[5] = { 'H', 'E', 'L', 'L', 'O'};
	// C언어에서 문자열의 마지막은 무조건 '\0' NULL 값이 붙는다.
	char str[14] = "Good Morning!";
	char* pstr = "Good Evening!";

	printf("%s\n", str);
	printf("%s\n", str1);
	printf("%s\n", str2); // 쓰레기 값 
	printf("%s\n", pstr);

	return 0;
}