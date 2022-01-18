#include <stdio.h>
#include <stdlib.h>


#define MAX 10000
int main_file_c(void) {
	
	// 파일 입출력
	// 파일에 어떤 데이터를 저장
	// 파일에 저장된 데이터를 불러오기

	// fputs , fgets 쌍 -> 문자열 저장
	// fprintf, fscanf 쌍
	//char line[MAX]; // char line[10000]

	////파일 열기
	//FILE* file = fopen("c:\\test1.txt", "wb"); // r : read(읽기) , w : write(쓰기) , a : append(이어쓰기) // t(text) b(바이너리 데이터)
	//if (file == NULL) {
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//fputs("fputs를 이용해서 글을 적어볼게요 \n", file);
	//fputs("잘 적히는지 확인해주세요.\n", file);

	////파일 닫기
	//// 파일을 열고나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면?
	//// 데이터 손실이 발생 가능. 파일을 닫아주는 습관을 길러주세요.
	//fclose(file);

	//FILE* file = fopen("c:\\test1.txt", "rb"); // r : read(읽기) , w : write(쓰기) , a : append(이어쓰기) // t(text) b(바이너리 데이터)
	//if (file == NULL) {
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//while (fgets(line, MAX, file) != NULL) {
	//	printf("%s", line);
	//}

	////fputs("fputs를 이용해서 글을 적어볼게요 \n", file);
	////fputs("잘 적히는지 확인해주세요.\n", file);

	////파일 닫기
	//// 파일을 열고나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면?
	//// 데이터 손실이 발생 가능. 파일을 닫아주는 습관을 길러주세요.
	//fclose(file);


	// fprintf , fscanf 쌍
	// printf("%d %d %s ..........");
	// scanf ("%d %d", &num1);

	int num[6] = { 0, }; // 추첨 번호
	int bonus = 0; // 보너스 번호

	char str1[MAX];
	char str2[MAX];

	FILE* fp = fopen("d:\\test2.txt", "w");
	if (fp == NULL) {
		printf("파일 열기 실패 \n");
		return 1;
	}
	// 로또 추첨 번호 저장
	fprintf(fp, "%s %d %d %d %d %d %d\n", "Number", 1, 2, 3, 4, 5, 6);
	fprintf(fp, "%s %d\n", "Bonus", 7);

	fclose(fp);

	// 파일 읽기 
	FILE* fp1 = fopen("d:\\test2.txt", "r");
	if (fp1 == NULL) {
		printf("파일 열기 실패 \n");
		return 1;
	}
	fscanf(fp1, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	
	fscanf(fp1,"%s %d",str2, &bonus);
	printf("%s %d\n", str2, bonus);
	fclose(fp1);

	return 0;
}