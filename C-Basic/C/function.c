// 함수

#include <stdio.h>

//함수 선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate); // 전체 total에서 ate를 먹고 남은걸 반환

int add(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div(int num1, int num2);


int main(void) {

	//int num = 2;
	////printf("num 은 %d 입니다.\n", num); // 2
	//p(num);

	//// 2 + 3 = ?
	//num = num + 3; // num += 3;
	////printf("num 은 %d 입니다.\n", num); // 5
	//p(num);

	//// 5 - 1 = ?
	//num -= 1; // num = num - 1;
	////printf("num 은 %d 입니다.\n", num);
	//p(num);

	//// 4 x 3 = ?
	//num *= 3; // num = num * 3;
	////printf("num 은 %d 입니다.\n", num); // 12
	//p(num);

	//// 12 / 6 = ?
	//num /= 6;
	////printf("num 은 %d 입니다.\n", num); // 2
	//p(num);

	//// 반환 값이 없는 함수
	//function_without_return();

	//// 반환 값이 있는 함수
	//int ret = function_with_return();
	//p(ret);

	//// 파라미터(전달) 값이 없는 함수
	//function_without_params();


	//// 파라미터(전달) 값이 있는 함수
	//function_with_params(1, 2, 3);

	// 파라미터(전달값)도 받고  반환값도 있는 함수
	//int ret = apple(5, 2);
	//printf("사과 5개 중에 2개를 먹으면 ? : %d 개가 남아요\n", ret);
	//printf("사과 %d 개 중에 %d 개를 먹으면? : %d 개가 남아요\n", 10, 4, apple(10, 4));

	int num = 2;

	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mult(num, 3);
	p(num);

	num = div(num, 6);
	p(num);


	return 0;


}
// 함수 정의
void p(int num) {
	printf("num 은 %d 입니다.\n", num);
}

void function_without_return() {
	printf("반환 값이 없는 함수입니다. \n");
}

int function_with_return() {
	printf("반환 값이 있는 함수입니다. \n");
	return 10;
}

void function_without_params() {
	printf("전달 값이 없는 함수입니다.\n");
}

void function_with_params(int num1, int num2, int num3) {
	printf("전달 값이 있는 함수이며 전달값은 %d, %d, %d 입니다.\n",num1, num2, num3);
}

int apple(int total, int ate) { // 전체 total에서 ate를 먹고 남은걸 반환
	printf("전달 값과 반환 값이 있는 함수입니다.\n");
	return total - ate;
}

int add(int num1, int num2) {
	return num1 + num2;
}
int sub(int num1, int num2) {
	return num1 - num2;
}
int mult(int num1, int num2) {
	return num1 * num2;
}
int div(int num1, int num2) {
	return num1 / num2;
}

// 함수의 구성
// 반환형 함수 이름(전달값) 으로 구성된다.

