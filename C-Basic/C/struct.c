#include <stdio.h>
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; // ���� ���� ȸ��
};
typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; // ���� ���� ȸ��
}GAME_INFO;

int main_struct(void) {
	// [���� ���]
	// �̸� : ��������
	// �߸ų⵵ : 2017 ��
	// ���� : 50��
	// ���ۻ� : ����ȸ��

	char* name = "��������";
	int year = 2017;
	int price = 50;
	char* company = "����ȸ��";

	// [�Ǵٸ� ���� ���]
	// �̸� : �ʵ�����
	// �߸ų⵵ : 2017 ��
	// ���� : 100��
	// ���ۻ� : �ʵ�ȸ��

	char* name2 = "�ʵ�����";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "�ʵ�ȸ��";

	// ����ü ���
	struct GameInfo gameinfo1;
	gameinfo1.company = "����ȸ��";
	gameinfo1.name = "��������";
	gameinfo1.year = 2017;
	gameinfo1.price = 50;

	// ����ü ���
	printf("-- ���� ��� ���� --\n");
	printf("  ���Ӹ�     : %s\n", gameinfo1.name);
	printf("  �߸ų⵵   : %d\n", gameinfo1.year);
	printf("  ����       : %d\n", gameinfo1.price);
	printf("  ���ۻ�     : %s\n", gameinfo1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameinfo2 = { "�ʵ�����", 2017, 100, "�ʵ�ȸ��" };
	printf("\n\n-- �Ǵٸ� ���� ��� ���� --\n");
	printf("  ���Ӹ�     : %s\n", gameinfo2.name);
	printf("  �߸ų⵵   : %d\n", gameinfo2.year);
	printf("  ����       : %d\n", gameinfo2.price);
	printf("  ���ۻ�     : %s\n", gameinfo2.company);

	struct GameInfo gameArray[2] = {
		{ "��������", 2017, 50, "����ȸ��" },
		{ "�ʵ�����", 2017, 100, "�ʵ�ȸ��" }
	};

	//����ü ������
	struct GameInfo* gamePtr; // ���� ������
	gamePtr = &gameinfo2;
	/*
	printf("\n\n-- �̼Ǹ��� ���� ��� ���� --\n");
	printf("  ���Ӹ�     : %s\n", (*gamePtr).name);
	printf("  �߸ų⵵   : %d\n", (*gamePtr).year);
	printf("  ����       : %d\n", (*gamePtr).price);
	printf("  ���ۻ�     : %s\n", (*gamePtr).company);
	*/
	printf("\n\n-- �̼Ǹ��� ���� ��� ���� --\n");
	printf("  ���Ӹ�     : %s\n", gamePtr->name);
	printf("  �߸ų⵵   : %d\n", gamePtr->year);
	printf("  ����       : %d\n", gamePtr->price);
	printf("  ���ۻ�     : %s\n", gamePtr->company);

	gameinfo2.friendGame = &gameinfo1;
	
	printf("\n\n-- ������ü�� ���� ��� ���� --\n");
	printf("  ���Ӹ�     : %s\n", gameinfo2.friendGame->name);
	printf("  �߸ų⵵   : %d\n", gameinfo2.friendGame->year);
	printf("  ����       : %d\n", gameinfo2.friendGame->price);
	printf("  ���ۻ�     : %s\n", gameinfo2.friendGame->company);

	// typedef 
	// �ڷ����� ������ ����
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� j = 50; // int j = 50;
	�Ǽ� k = 3.23f; // float k = 3.23f
	
	printf("\n\n���� : %d,   �Ǽ� : %.2f\n", j, k);

	typedef struct GameInfo ��������;

	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year = 2007;

	GAME_INFO game2;
	game2.name = "�ѱ� ���� 2";
	game2.year = 2014;

	struct GameInformation game3;
	return 0;

}