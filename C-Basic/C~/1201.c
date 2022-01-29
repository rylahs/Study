// 함수?
// Hello World! -> 100번 loop

// Integer Return
// Add : Function Name
// () : 매개변수, 인자, 인수, 파라미터
// 인자를 받아서 처리를 하고 결과를 리턴
// return 값의 반환
// ; -> 줄바꿈의 의미
// 부품화, 모듈화, 재사용화가 좋겠다 - 이론
// 코딩이 쉬워지고 빨라지고 유지보수, 확장성이 좋다.

#include <stdio.h>

int Add_1201(int a, int b) {
	return a + b;
	// int c = a + b;
	// return c;
}

//Void : 공허, 빔, 허공
int AddOne(int a) {
	a += a;
	return a;
}

// 함수 이름 정의 get_name 소문자, 단어가 조합될 떄 언더바 사용 가능
// strict(엄격한) 룰은 아님
// 현재 기능을 표현해서 이름을 정의하면 100점


// 212 SimpleAddFunc.c 30번;;


int main_1201(void) {
	// for 함수 function
	// 212p
	// 두수가 바뀌는 덧셈을 100번 -> 함수
	/*int result;
	result = Add(5, 10);
	printf("%d\n", result);

	result = Add(10, 55);
	printf("%d\n", result);*/

	//더하기 
	//함수 호출 (Function Call)
	//함수 이름 (소괄호)
	// RAM 16GB : 휘발성 주 메모리
	// CPU :
	// SSD / HARD : 영원한 저장 -> 파일로 저장

	int result; // 선언
	result = Add_1201(743, 593); //초기화
	// 선언 및 초기화
	// int result = 0;
	

	printf("%d\n", result);
	result = AddOne(result);
	printf("%d\n", result);

	return 0;
}