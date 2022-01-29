#include <stdio.h>

int main_array2(void) {

	// 1 ~ 10까지의 숫자를 저장하고 5번째와 10번째 값을 출력
	int arr1[10];

	for (int i = 0; i < 10; i++) {
		arr1[i] = i + 1;
		if (i % 5 == 4)
			printf("%d\n", arr1[i]);
	}

	// 초기값 사용 시에 크기 생략 가능
	// 1차원 배열의 합과 평균
	int arr2[] = { 20, 30, 40, 50, 60, 70 };
	int sumArr2 = 0, avgArr2 = 0;
	for (int i = 0; i < 6; i++) {
		sumArr2 += arr2[i];
		printf("Arr2[%d] : %d\n", i, arr2[i]);
	}
	avgArr2 = sumArr2 / 6;
	printf("Arr2 Sum : %d\n", sumArr2);
	printf("Arr2 Avg : %d\n", avgArr2);


	// 1 ~ 100까지의 수를 배열에 저장하고 6의 배수만 출력
	int arr3[100] = { 0, };
	for (int i = 0; i < 100; i++) {
		arr3[i] = i + 1;
		if (arr3[i] % 6 == 0) {
			printf("%d ", arr3[i]);
		}
	}
	printf("\n");
	return 0;
}