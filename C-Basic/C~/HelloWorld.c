#include <stdio.h> // 헤더파일 선언

int main_helloworld(void) { // main 함수 시작

	// 이 함수 내에 여러개의 printf 함수를 통해 실습한 화면을 볼 수 있다.
	printf("hello c언어 \n");
	printf("Hello World! \n");
	printf("----------문제 1 -----------\n");
	printf("홍길동\n홍 길 동\n 홍  길  동\n");
	printf("----------문제 2 -----------\n");
	printf("이름  : Chan ho\n");
	printf("주소  : 대구시\n");
	printf("Phone : 010-0000-0000\n");
	/*여러 줄 단위 주석 작성하기
	제목 : Hello World 출력
	기능 : 문자열의 출력
	파일이름: HelloWorld.cpp
	*/
	
	printf("\nHello EveryBody\n");
	printf("%d\n", 1255534);
	printf("%d %d\n", 510, 720);

	printf("\nMy age : %d\n", 32);
	printf("%d is My Point\n", 100);
	printf("Good \nMorning \nEverybody\n");

	printf("\n\n------------문제2-2(1) 시작-----------\n");
	printf("제 이름은 홍길동입니다.\n");
	printf("제 나이는 %d살이고요.\n", 20);
	printf("제가 사는 곳의 번지수는 %d-%d입니다.\n", 123, 456);

	printf("\n-------------문제2-2(2) 시작------------\n");
	printf("%dx%d=%d\n", 4, 5, 4 * 5);
	printf("%dx%d=%d\n", 7, 9, 7 * 9);

	return 0; // 0 반환
	//main 함수의 끝

}