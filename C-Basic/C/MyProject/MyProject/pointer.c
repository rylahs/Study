#include <stdio.h>

void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int* ptr);
int main(void) {
	//포인터


	//[철수] : 101호
	//[영희] : 201호
	//[민수] : 301호

	// 각 문앞에 '암호'가 걸려있음
	//int 철수 = 1; // 암호
	//int 영희 = 2;
	//int 민수 = 3;

	//printf("철수네 주소 : %d , 암호 : %d\n", &철수, 철수);
	//printf("영희네 주소 : %d , 암호 : %d\n", &영희, 영희);
	//printf("민수네 주소 : %d , 암호 : %d\n", &민수, 민수);

	//// 미션맨!

	//// 첫번째 미션 : 아파트의 각 집에 방문해서 문에 적힌 암호를 확인
	//int * 미션맨; // 포인터 변수
	//미션맨 = &철수;
	//printf("미션맨의 방문하는 곳의 주소는 ? : %d, 암호는 ? : %d\n", 미션맨, *미션맨);

	//미션맨 = &영희;
	//printf("미션맨의 방문하는 곳의 주소는 ? : %d, 암호는 ? : %d\n", 미션맨, *미션맨);

	//미션맨 = &민수;
	//printf("미션맨의 방문하는 곳의 주소는 ? : %d, 암호는 ? : %d\n", 미션맨, *미션맨);

	//// 두번째 미션 각 암호에 3을 곱해라
	//미션맨 = &철수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨의 암호를 바꾼 곳의 주소는 ? : %d, 암호는 ? : %d\n", 미션맨, *미션맨);

	//미션맨 = &영희;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨의 암호를 바꾼 곳의 주소는 ? : %d, 암호는 ? : %d\n", 미션맨, *미션맨);

	//미션맨 = &민수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨의 암호를 바꾼 곳의 주소는 ? : %d, 암호는 ? : %d\n", 미션맨, *미션맨);

	//// 스파이 
	//// 미션맨이 바꾼 암호에서 2를 빼라!

	//int* 스파이 = 미션맨;
	//printf("\n....스파이가 미션을 수행하는 중 .......\n\n");
	//스파이 = &철수;
	//*스파이 = *스파이 - 2; // 철수 = 철수 - 2;
	//printf("스파이가 방문하는 곳의 주소는 ? : %d, 암호는 ? : %d\n", 스파이, *스파이);

	//스파이 = &영희;
	//*스파이 = *스파이 - 2; // 
	//printf("스파이가 방문하는 곳의 주소는 ? : %d, 암호는 ? : %d\n", 스파이, *스파이);

	//스파이 = &민수;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 곳의 주소는 ? : %d, 암호는 ? : %d\n", 스파이, *스파이);

	//printf("\n...철수 영희 민수는 집에 오고서는 바뀐 암호를 보고 깜놀...\n\n");
	//printf("철수네 주소 : %d , 암호 : %d\n", &철수, 철수);
	//printf("영희네 주소 : %d , 암호 : %d\n", &영희, 영희);
	//printf("민수네 주소 : %d , 암호 : %d\n", &민수, 민수);

	//// 참고로, 미션맨이 사는 곳의 주소는 &미션맨으로 확인
	//printf("미션맨의 주소는 : %d\n", &미션맨);
	//printf("스파이의 주소는 : %d\n", &스파이);

	//// 배열 ?
	//int arr[3] = { 5, 10, 15 };
	//int* ptr = arr;
	//for (int i = 0; i < 3; i++) {
	//	printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++) {
	//	printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
	//}
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;
	//for (int i = 0; i < 3; i++) {
	//	//printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	//	printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i));
	//}
	//for (int i = 0; i < 3; i++) {
	//	//printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
	//	printf("포인터 ptr[%d]의 값 : %d\n", i,*(ptr + i));
	//}

	//// *(arr + i) == arr[i]와 같은 표현
	//// arr == arr배열의 첫번째 값의 주소와 동일 &arr[0]

	//printf("arr의 값 : %d\n", arr);
	//printf("arr[0]의 주소 : %d\n", &arr[0]);

	//printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *(arr)); // *(arr + 0)
	//printf("arr[0]의 실제 값 : %d\n", *(&arr[0]));


	//// *&가 함께 쓰이면 아무것도 없는 것과 같다. *는 그 주소에서의 값이기 때문이고 &는 주소이기 때문
	//// *&는 서로 상쇄된다.
	//printf("arr[0]의 실제 값 : %d\n", *&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&arr[0]);
	//printf("arr[0]의 실제 값 : %d\n", arr[0]);

	//
	//int a = 20;
	//int b = 40;

	//printf("a의 주소 : %d\n", &a);
	//printf("b의 주소 : %d\n", &b);
	//printf("a : %d\n b : %d\n", a, b);
	//printf("--------- Swap ------------\n");
	//swap(a, b);
	//swap_addr(&a, &b);

	//printf("\na : %d, b : %d\n", a, b); // 값이 그대로

	//// 값에 의한 복사 (Call-by-Value) -> 값만 복사한다는 의미

	////주소값을 넘기면? -> 메모리 공간에 있는 주소 값 자체를 넘기게 되면 ..
	//printf("(주소값 전달) a의 주소 : %d\n", &a);
	//printf("(주소값 전달) b의 주소 : %d\n", &b);

	//배열일 때 arr2 -> 주소
	int arr2[3] = { 10, 20, 30 };
	//changeArray(arr2);
	changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++) {
		printf("Array[%d] : %d\n", i, arr2[i]);
	}

	// scanf_s에서 &num과 같이 &를 사용하는 이유는? 주소값에 입력하기 때문


	return 0;
}

void swap(int a, int b) {

	printf("Swap 함수 내의 a의 주소 : %d\n", &a);
	printf("Swap 함수 내의 b의 주소 : %d\n", &b);
	int temp = a;
	a = b;
	b = temp;

}

void swap_addr(int* a, int* b) {

	printf("Swap 함수 내의 a의 주소 : %d\n", a);
	printf("Swap 함수 내의 b의 주소 : %d\n", b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("\n(주소값 전달) Swap 함수 내부 => a : %d, b : %d", *a, *b);
}

void changeArray(int* ptr) {
	ptr[2] = 50;
}