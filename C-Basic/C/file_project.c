#include <stdio.h>

// 비밀 번호를입력 받아서 맞는 경우 비밀일기를 읽어와서 보여주고 계속 작성하도록 합니다.
// 틀린 경우 경고 메시지를 표시하고 종료합니다.

#define MAX 10000
int main() {

	// fgets fputs 

	char line[MAX]; // 파일에서 불러올 내용을 저장할 변수
	char contents[MAX]; //일기장에 입력할 내용

	char password[20]; // 비밀번호 입력
	char c; // 비밀번호 입력할 때 키값 확인용 (마스킹)

	printf("비밀 일기에 오신 것을 환영합니다.\n");
	printf("비밀 번호를 입력하세요 : ");

	// getchar() / getch()의 차이
	// getchar() = ENTER를 입력 받아야 동작
	// getch() 키 입력시에 바로바로 동작함
	int i = 0;
	while (1) {
		c = getch();
		if (c == 13) // Enter 비밀번호 입력 종료
		{
			password[i] = '\0';
			break;
		}
		else { // 비밀번호 입력 중
			printf("*");
			password[i] = c;
		}
		i++;
	}

	// 비밀번호 나도코딩 skehzheld
	printf("\n\n === 비밀번호 확인 중... ===\n\n");

	if (strcmp(password, "skehzheld") == 0) { // 비밀번호 일치
		printf("=== 비밀번호 확인 완료 === \n\n");

		char* fileName = "diary.txt";
		FILE* fp = fopen(fileName, "a+b"); // 파일이 없으면 생성, 파일이 있으면 append한다. 뒤에서 내용을 추가한다.
		if (fp == NULL) {
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, fp) != NULL) {
			printf("%s", line);
		}

		printf("\n\n 내용을 계속 작성하세요! 종료하시려면 EXIT를 입력하세요 \n\n");

		while (1) {
			scanf("%[^\n]", contents);  // 새 줄 \n이 나오기 전까지 읽어들임 (한 문장씩)
			getchar(); // Enter 입력 (\n) Flush 처리
			if (strcmp(contents, "EXIT") == 0) {
				printf("비밀일기 입력을 종료합니다.\n\n");
				break;
			}

			fputs(contents, fp);
			fputs("\n", fp); // 엔터를 위한 추가 엔터키를 무시했으므로 임의로 추가

		}
		fclose(fp);

	}


	return 0;

}