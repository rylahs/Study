#include <stdio.h>

int main(void) {

	//10��?
	/*
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	*/
	// ++ �Ի�
	/*
	int a = 10;
	printf("a = %d\n", a); // 10
	a++;
	printf("a = %d\n", a); // 11
	a++;
	printf("a = %d\n", a); // 12
	*/
	
	//int b = 20;
	//printf("b = %d\n", ++b); // 21
	//printf("b = %d\n", b++); // 21 -> 22
	//printf("b = %d\n", b); // 22

	//int i = 1;
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);

	// �ݺ���
	// for, while, do while

	//for (����; ����; ����)
	/*for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}*/

	// while(����) { }
	/*int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i++);
		//i++;
	}*/

	// do { } while(����);
	//int i = 1;
	//do {
	//	printf("Hello World %d\n", i++);
	//} while (i <= 10);

	// 2�� for �ݺ���
	//for (int i = 1; i <= 3; i++) {
	//	printf("ù��° �ݺ��� : %d\n", i);
	//	for (int j = 1; j <= 5; j++) {
	//		printf("    �ι�° �ݺ��� : %d\n", j);
	//	}
	//}

	// ������
	// 2 x 1 = 2
	// 2 x 2 = 4
	// 2 x 3 = 6
	// 9 x 9 = 81

	//for (int i = 2; i <= 9; i++) {
	//	printf("%d�� ���\n", i);
	//	for (int j = 1; j <= 9; j++) {
	//		printf("%d x %d = %d\n", i, j, i * j);
	//	}
	//	printf("\n");
	//}
	/*
	*
	**
	***
	****
	*****
	*/
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j <= i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	/*
	     *
	    **
	   ***
      ****
	 *****
	 */
	/*
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	*/

// �Ƕ�̵带 �׾ƶ� ������Ʈ

/*
    *
   ***
  *****
 *******
*********
*/
	int floor;
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1 ; k++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}