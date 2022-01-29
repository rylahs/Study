#include <stdio.h>

int main(void) {
//	// 이중 반복문
//// *
//// ***
//// *****
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	printf("\n");
////      *
////     **
////    ***
////   ****
////  *****
////  
//
//	int n = 6;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (j < n - i - 1)
//				printf(" ");
//			else
//				printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	printf("\n");
//	//   *
//	//  ***
//	// *****
//	int input = 3;
//	for (int i = 1; i <= input; i++) {
//		for (int j = 1; j <= input - i; j++) {
//			printf(" ");
//		}
//		for (int j = 1; j <= 2 * i - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n\n");
//
//	// *****
//	//  ***
//	//   *
//	//  ***
//	// *****
//	int inputc = 5;
//	int mid = inputc / 2 + 1;
//	int staridx = 0;
//	for (int i = 1; i <= inputc; i++) {
//		for (int j = 1; j <= inputc; j++) {
//			if (staridx < j && j <= inputc - staridx)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//		if (i < mid)
//			staridx++;
//		else
//			staridx--;
//	}
//	printf("\n");
//	printf("\n");
//	// *
//	// ***
//	// *****
//	// ***
//	// *
//	int inputb = 5;
//	int midb = inputb / 2;
//	int end = 0;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < end + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//		if (i < midb)
//			end += 2;
//		else
//			end -= 2;
//	}
//	/*
//	int inputb = 5;
//	int idx = inputb;
//	for (int i = 0; i < inputb / 2; i++) {
//		for (int j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = inputb / 2; i >= 0; i--) {
//		for (int j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	*/
//	//   *
//	//  ***
//	// *****
//	//  ***
//	//   *
//	printf("\n");
//	printf("\n");
//
//
//	int inputd = 9;
//
//	for (int i = 1; i <= inputd / 2 + 1; i++) {
//		for (int j = 1; j <= (inputd / 2 + 1) - i; j++) {
//			printf(" ");
//		}
//		for (int j = 1; j <= 2 * i - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = inputd / 2; i >= 1; i--) {
//		for (int j = 1; j <= (inputd / 2 + 1) - i; j++) {
//			printf(" ");
//		}
//		for (int j = 1; j <= 2 * i - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	printf("\n\n");

	int starStart = 0;
	int starNumberLine = 5;
	int starMiddle = starNumberLine / 2;
	int starEnd = starNumberLine;

	for (int i = 0; i < starNumberLine; i++) {
		for (int j = 0; j < starNumberLine; j++) {
			if (j < starStart || j >= starEnd ) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");

		if (i < starMiddle) {
			starStart++;
			starEnd--;
		}
		if (i >= starMiddle) {
			starStart--;
			starEnd++;
		}
	}
	printf("\n");
	printf("\n");
	starNumberLine = 7;
	starMiddle = starNumberLine / 2;
	starStart = starMiddle;
	starEnd = starMiddle;
	for (int i = 0; i < starNumberLine; i++) {
		for (int j = 0; j < starNumberLine; j++) {
			if (j > starStart || j < starEnd) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");

		if (i < starMiddle) {
			starStart++;
			starEnd--;
		}
		if (i >= starMiddle) {
			starStart--;
			starEnd++;
		}
	}



	return 0;
}