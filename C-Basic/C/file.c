#include <stdio.h>
#include <stdlib.h>


#define MAX 10000
int main_file_c(void) {
	
	// ���� �����
	// ���Ͽ� � �����͸� ����
	// ���Ͽ� ����� �����͸� �ҷ�����

	// fputs , fgets �� -> ���ڿ� ����
	// fprintf, fscanf ��
	//char line[MAX]; // char line[10000]

	////���� ����
	//FILE* file = fopen("c:\\test1.txt", "wb"); // r : read(�б�) , w : write(����) , a : append(�̾��) // t(text) b(���̳ʸ� ������)
	//if (file == NULL) {
	//	printf("���� ���� ����\n");
	//	return 1;
	//}

	//fputs("fputs�� �̿��ؼ� ���� ����Կ� \n", file);
	//fputs("�� �������� Ȯ�����ּ���.\n", file);

	////���� �ݱ�
	//// ������ ������ ���� ���� ���¿��� � ���α׷��� ������ �����?
	//// ������ �ս��� �߻� ����. ������ �ݾ��ִ� ������ �淯�ּ���.
	//fclose(file);

	//FILE* file = fopen("c:\\test1.txt", "rb"); // r : read(�б�) , w : write(����) , a : append(�̾��) // t(text) b(���̳ʸ� ������)
	//if (file == NULL) {
	//	printf("���� ���� ����\n");
	//	return 1;
	//}

	//while (fgets(line, MAX, file) != NULL) {
	//	printf("%s", line);
	//}

	////fputs("fputs�� �̿��ؼ� ���� ����Կ� \n", file);
	////fputs("�� �������� Ȯ�����ּ���.\n", file);

	////���� �ݱ�
	//// ������ ������ ���� ���� ���¿��� � ���α׷��� ������ �����?
	//// ������ �ս��� �߻� ����. ������ �ݾ��ִ� ������ �淯�ּ���.
	//fclose(file);


	// fprintf , fscanf ��
	// printf("%d %d %s ..........");
	// scanf ("%d %d", &num1);

	int num[6] = { 0, }; // ��÷ ��ȣ
	int bonus = 0; // ���ʽ� ��ȣ

	char str1[MAX];
	char str2[MAX];

	FILE* fp = fopen("d:\\test2.txt", "w");
	if (fp == NULL) {
		printf("���� ���� ���� \n");
		return 1;
	}
	// �ζ� ��÷ ��ȣ ����
	fprintf(fp, "%s %d %d %d %d %d %d\n", "Number", 1, 2, 3, 4, 5, 6);
	fprintf(fp, "%s %d\n", "Bonus", 7);

	fclose(fp);

	// ���� �б� 
	FILE* fp1 = fopen("d:\\test2.txt", "r");
	if (fp1 == NULL) {
		printf("���� ���� ���� \n");
		return 1;
	}
	fscanf(fp1, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	
	fscanf(fp1,"%s %d",str2, &bonus);
	printf("%s %d\n", str2, bonus);
	fclose(fp1);

	return 0;
}