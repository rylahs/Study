#include <stdio.h> // ǥ�� ������� ����ϰ� ���ִ� �迭

int main_day_one(void) {// ���� �Լ�
	/*
	//printf : ������ ȭ�鿡 ����ϴ� ǥ�� �Լ�
	//%d : ������ ǥ���ϴ� ���� ����
	//%f : �Ǽ��� ǥ���ϴ� ���Ĺ���
	//%c : ���� ǥ��
	//%s : ���ڿ� ǥ��
	//\n : ���� ���� (New line)
	printf("Hello C language\n");
	printf("��ο� C���%d!\n", 100);
	printf("��ο� %dC���!\n", 222);
	printf("%d��ο� C%d���%d!\n", 300, 200, 100);
	printf("���� ǥ�� : %d\n", 100);
	printf("�Ǽ� ǥ�� : %f\n", 100.12);
	printf("���� ǥ�� : %c\n", 'A');
	printf("���ڿ� ǥ�� : %s\n", "ȫ�浿");
	*/
	/*
	printf("%s\n", "-----------------------------------");
	printf("\t%s\n","�л� ���� ���");
	printf("%s\n", "-----------------------------------");
	printf("1. %6s : %s\n", "�̸�", "ȫ�浿");
	printf("2. %6s : %c\n", "����", 'M');
	printf("3. %6s : %s\n", "��ȭ", "010-1111-2222");
	printf("4. %6s : %d��\n", "����", 300);
	printf("5. %6s : %.1fcm\n", "Ű", 175.6);
	printf("6. %6s : %.1fkg\n", "������", 71.6);
	printf("7. %6s : %s\n", "�ּ�", "���� �Ѿ� ȫ�밨�� 11����");

	int a = 010;
	printf("%d\n", a);
	*/
	char* line = "-----------------------------------";
	char* intro = "�л� ���� ���";
	char* name_name = "�̸�";
	char* name_sub = "ȫ�浿";
	char* gender_name = "����";
	char gender_sub = 'M';
	char* phone_name = "��ȭ";
	char* phone_sub = "010-1111-2222";
	char* age_name = "����";
	int age = 300;
	char* height_name = "Ű";
	double height = 175.6;
	char* weight_name = "������";
	double weight = 71.6;
	char* address_name = "�ּ�";
	char* address_sub = "���� �Ѿ� ȫ�밨�� 11����";
	printf("%s\n", line);
	printf("\t%s\n", intro);
	printf("%s\n", line);
	printf("1. %6s : %s\n", name_name, name_sub);
	printf("2. %6s : %c\n", gender_name, gender_sub);
	printf("3. %6s : %s\n", phone_name, phone_sub);
	printf("4. %6s : %d��\n", age_name, age);
	printf("5. %6s : %1.0lfcm\n", height_name, height);
	printf("6. %6s : %1.0lfkg\n", weight_name, weight);
	printf("7. %6s : %s\n", address_name, address_sub);

	return 0;
}

// ����
// ��Ģ������ : ����(+) , ����(-), ����(*), ������(/)
// 1. PI�� �����ϴ� �Ǽ� ��� ���� ����
// 2. ���� ������ �Ǽ� ����(���� �ƹ��ų� ����)
// 3. ���� ���� (PI * r ^ 2)
// 
// ����2
// ���� ���� ���� ���� ����(����) -> ���� �ƹ��ų� ����
// ���� , ��� �������� �����ϰ� ��� (56~57)

