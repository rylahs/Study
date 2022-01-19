#include <stdio.h>

int main(void) {

	// 배열
	//int subway_1 = 30; //지하철 1호차에는 30명
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("지하철 1호차에 %d명이 차고 있습니다.\n", subway_1);
	//printf("지하철 2호차에 %d명이 차고 있습니다.\n", subway_2);
	//printf("지하철 3호차에 %d명이 차고 있습니다.\n", subway_3);
	
	// 여러 변수를 함께 동시에 생성
	//int subway_array[3]; // 0 , 1, 2

	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++) {
	//	printf("지하철 %d호차에 %d 명이 타고 있습니다.\n", i + 1, subway_array[i]);
	//}

	//값 설정 방법
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}*/

	// 값은 초기화를 반드시 해야됨
	/*int arr[10]; 
	for (int i = 0; i < 10; i++) {
		printf("%d \n", arr[i]);
	}*/

	//배열 크기는 항상 상수로 선언
	/*int size = 10;
	int arr[size]; // 오류*/

	//int arr[10] = { 1, 2 }; // 3번째 값부터는 자동으로 0
	//for (int i = 0; i < 10; i++) {
	//	printf("%d \n", arr[i]);
	//}

	//int arr[] = { 1, 2 }; // arr[2]
	//float arr_f[5] = { 1.0f, 2.3f, 3.5f };
	//for (int i = 0; i < 5; i++) {
	//	printf("%.2f \n", arr_f[i]);
	//}

	// 문자, 문자열
	/*char c = 'A';
	printf("%c\n", c);*/

	// 문자열 끝에는 NULL 이나 \0이 포함되어야 함.
	//char str[6] = "coding"; //[c][o][d][i][n][g]
	//char str[7] = "coding";
	//printf("%s\n", str);

	//char str[] = "coding";
	///*printf("%s\n", str);
	//printf("%d\n", sizeof(str));*/

	//for (int i = 0; i < sizeof(str); i++) {
	//	printf("%c\n", str[i]);
	//}

	//char kor[] = "나도코딩";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));
	//for (int i = 0; i < sizeof(kor); i++) {
	//		printf("%c\n", kor[i]);
	//	}

	// 영어 한글자 1바이트
	// 한글 한글자 2바이트


	//char c_array[7] = { 'c','o','d','i','n','g','\0' };
	/*char c_array[6] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);*/

	//char c_array[10] = { 'c','o','d','i','n','g' };
	//printf("%s\n", c_array);

	////for (int i = 0; i < sizeof(c_array); i++) {
	////	printf("%c\n", c_array[i]);
	////}
	//for (int i = 0; i < sizeof(c_array); i++) {
	//	printf("%d\n", c_array[i]); // ASCII 코드 값 NULL 문자는 0으로 입력
	//}


	//// 문자열 입력받기 경찰서 조서쓰기 예제
	//char name[256];
	//printf("이름을 입력하세요 : ");
	//scanf_s("%s", name, sizeof(name));
	//printf("%s\n", name);

	// 참고 : ASCII 코드란? ANSI(미국 표준 협회)에서 제시한 표준 코드 체계
	// 7bit, 총 128개 코드 (0~127)
	// a : 97 (문자 a의 아스키 코드 정수값)
    // A : 65
	// O : 46

	//printf("%c\n", 'a');
	//printf("%d\n", 'a');

	//printf("%c\n", 'b');
	//printf("%d\n", 'b');

	//printf("%c\n", 'A');
	//printf("%d\n", 'A');

	//printf("%c\n", '\0');
	//printf("%d\n", '\0');

	//printf("%c\n", '0');
	//printf("%d\n", '0');

	//printf("%c\n", '1');
	//printf("%d\n", '1');

	// 참고 2 : 0 ~127 사이의 ASCII 코드 정수 값에 해당하는 문자 확인
	for (int i = 0; i < 128; i++) {
		printf("아스키 코드 정수 %d : %c\n", i, i);
	}
	return 0;
}