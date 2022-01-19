#include <stdio.h>
#include <time.h>
// 10������ ���� �ٸ� ���� (�� ī�� 2�徿) 
// ����ڷκ��� 2���� �Է� ���� �޾Ƽ� -> ���� ���� ã���� ī�� ������
// ��� ������ ���� ã���� ���� ����
// �� ���� Ƚ�� �˷��ֱ�

int arrayAnimal[4][5]; // ī�� ���� �� 20��
int checkAnimal[4][5]; // ������������ ���� Ȯ��
char* strAnimal[10];
void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getemptyPos();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();// ���� ��ġ ���
void printQuestions();  // ������� (ī�� ����)



int main_m_array_project(void) {
	srand(time(NULL)); // �����ʱ�ȭ


	initAnimalArray();
	initAnimalName();

	shuffleAnimal();
	int failCount = 0; // ���� Ƚ��

	while (1) {
		int select1 = 0; // ����� ������ ó�� ��
		int select2 = 0; // ����ڰ� ������ �ι�° ��

		printAnimals();// ���� ��ġ ���
		printQuestions();  // ������� (ī�� ����)
		printf("������ ī�带 2�� ������ : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
			continue;

		// ��ǥ�� �ش��ϴ� ī�带 ������� ������ �ٸ��� Ȯ��
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		// ���� ������ ���
		if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 // ī�尡 �ȵ�������
			&& checkAnimal[secondSelect_x][secondSelect_y] == 0) // ī�尡 �ȵ�������

			&&

			(arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y])) {
			printf("\n\n���� ! : %s �߰�!!\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}

		// �ٸ� ����
		else {
			printf("\n\n ��!! (Ʋ�Ȱų� �̹� �������� ī���Դϴ�)\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		// ��� ������ ã�Ҵ��� ���� 1. ��, 2. ����
		if (foundAllAnimals() == 1) {
			printf("\n\n�����մϴ�. ��� ������ ã�ҳ׿�.\n");
			printf("���ݱ��� �� %d�� �Ǽ��ϼ̽��ϴ�. \n",failCount);
			exit(0);
		}
	}
	return 0;
}

void initAnimalArray() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arrayAnimal[i][j] = -1;
			checkAnimal[i][j] = 0;
		}
	}
}
void initAnimalName() {
	strAnimal[0] = "������";
	strAnimal[1] = "�ϸ�";
	strAnimal[2] = "������";
	strAnimal[3] = "�����";
	strAnimal[4] = "����";
	strAnimal[5] = "�ڳ���";
	strAnimal[6] = "�⸰";
	strAnimal[7] = "��Ÿ";
	strAnimal[8] = "Ÿ��";
	strAnimal[9] = "ȣ����";
}

void shuffleAnimal() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = getemptyPos();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

int getemptyPos() {
	while (1) {
		int ranPos = rand() % 20; // 0 ~ 19 
		int x = conv_pos_x(ranPos);
		int y = conv_pos_y(ranPos);

		if (arrayAnimal[x][y] == -1) {
			return ranPos;
		}
	}
	return 0;
}

int conv_pos_x(int x) {
	return x / 5;
}

int conv_pos_y(int y) {
	return y % 5;
}
void printAnimals() {// ���� ��ġ ���
	//������
	//������
	//������
	//������
	printf("\n========�̰� ����ε� ���� �����ִ°ž� ==============\n\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n==========================================\n\n");
}
void printQuestions() {  // ������� (ī�� ����)
	printf("\n\n(����)\n\n");
	int seq = 0;
	                 // seq
	//������  0  1  2  3  4      0 0 0 0 0
	//������  5  6  7  8  9      1 0 0 0 0
	//������ 10 11 12 13 14      0 0 0 0 1
	//������ 15 16 17 18 19      0 0 0 0 0

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			// ī�带 ����� ������ �������� '���� �̸�'
			// ���� ������ �������� (������ ���������� �޸� -> ��ġ�� ��Ÿ���� ����
			if (checkAnimal[i][j] != 0) {
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			else {
				printf("%8d", seq);
			}
			seq++;
		}
		printf("\n");
	}
}

int foundAllAnimals() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (checkAnimal[i][j] == 0) {
				return 0;
			}
		}
	}
	return 1;
}