#include <stdio.h>

// ��� ��ȣ���Է� �޾Ƽ� �´� ��� ����ϱ⸦ �о�ͼ� �����ְ� ��� �ۼ��ϵ��� �մϴ�.
// Ʋ�� ��� ��� �޽����� ǥ���ϰ� �����մϴ�.

#define MAX 10000
int main() {

	// fgets fputs 

	char line[MAX]; // ���Ͽ��� �ҷ��� ������ ������ ����
	char contents[MAX]; //�ϱ��忡 �Է��� ����

	char password[20]; // ��й�ȣ �Է�
	char c; // ��й�ȣ �Է��� �� Ű�� Ȯ�ο� (����ŷ)

	printf("��� �ϱ⿡ ���� ���� ȯ���մϴ�.\n");
	printf("��� ��ȣ�� �Է��ϼ��� : ");

	// getchar() / getch()�� ����
	// getchar() = ENTER�� �Է� �޾ƾ� ����
	// getch() Ű �Է½ÿ� �ٷιٷ� ������
	int i = 0;
	while (1) {
		c = getch();
		if (c == 13) // Enter ��й�ȣ �Է� ����
		{
			password[i] = '\0';
			break;
		}
		else { // ��й�ȣ �Է� ��
			printf("*");
			password[i] = c;
		}
		i++;
	}

	// ��й�ȣ �����ڵ� skehzheld
	printf("\n\n === ��й�ȣ Ȯ�� ��... ===\n\n");

	if (strcmp(password, "skehzheld") == 0) { // ��й�ȣ ��ġ
		printf("=== ��й�ȣ Ȯ�� �Ϸ� === \n\n");

		char* fileName = "diary.txt";
		FILE* fp = fopen(fileName, "a+b"); // ������ ������ ����, ������ ������ append�Ѵ�. �ڿ��� ������ �߰��Ѵ�.
		if (fp == NULL) {
			printf("���� ���� ����\n");
			return 1;
		}

		while (fgets(line, MAX, fp) != NULL) {
			printf("%s", line);
		}

		printf("\n\n ������ ��� �ۼ��ϼ���! �����Ͻ÷��� EXIT�� �Է��ϼ��� \n\n");

		while (1) {
			scanf("%[^\n]", contents);  // �� �� \n�� ������ ������ �о���� (�� ���徿)
			getchar(); // Enter �Է� (\n) Flush ó��
			if (strcmp(contents, "EXIT") == 0) {
				printf("����ϱ� �Է��� �����մϴ�.\n\n");
				break;
			}

			fputs(contents, fp);
			fputs("\n", fp); // ���͸� ���� �߰� ����Ű�� ���������Ƿ� ���Ƿ� �߰�

		}
		fclose(fp);

	}


	return 0;

}