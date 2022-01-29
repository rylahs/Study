#include <stdio.h> // 표준 입출력을 사용하게 해주는 배열

int main_day_one(void) {// 메인 함수
	/*
	//printf : 정보를 화면에 출력하는 표준 함수
	//%d : 정수를 표현하는 서식 문자
	//%f : 실수를 표시하는 서식문자
	//%c : 문자 표현
	//%s : 문자열 표현
	//\n : 개행 문자 (New line)
	printf("Hello C language\n");
	printf("헬로우 C언어%d!\n", 100);
	printf("헬로우 %dC언어!\n", 222);
	printf("%d헬로우 C%d언어%d!\n", 300, 200, 100);
	printf("정수 표현 : %d\n", 100);
	printf("실수 표현 : %f\n", 100.12);
	printf("문자 표현 : %c\n", 'A');
	printf("문자열 표현 : %s\n", "홍길동");
	*/
	/*
	printf("%s\n", "-----------------------------------");
	printf("\t%s\n","학생 정보 출력");
	printf("%s\n", "-----------------------------------");
	printf("1. %6s : %s\n", "이름", "홍길동");
	printf("2. %6s : %c\n", "성별", 'M');
	printf("3. %6s : %s\n", "전화", "010-1111-2222");
	printf("4. %6s : %d세\n", "나이", 300);
	printf("5. %6s : %.1fcm\n", "키", 175.6);
	printf("6. %6s : %.1fkg\n", "몸무게", 71.6);
	printf("7. %6s : %s\n", "주소", "조선 한양 홍대감댁 11번지");

	int a = 010;
	printf("%d\n", a);
	*/
	char* line = "-----------------------------------";
	char* intro = "학생 정보 출력";
	char* name_name = "이름";
	char* name_sub = "홍길동";
	char* gender_name = "성별";
	char gender_sub = 'M';
	char* phone_name = "전화";
	char* phone_sub = "010-1111-2222";
	char* age_name = "나이";
	int age = 300;
	char* height_name = "키";
	double height = 175.6;
	char* weight_name = "몸무게";
	double weight = 71.6;
	char* address_name = "주소";
	char* address_sub = "조선 한양 홍대감댁 11번지";
	printf("%s\n", line);
	printf("\t%s\n", intro);
	printf("%s\n", line);
	printf("1. %6s : %s\n", name_name, name_sub);
	printf("2. %6s : %c\n", gender_name, gender_sub);
	printf("3. %6s : %s\n", phone_name, phone_sub);
	printf("4. %6s : %d세\n", age_name, age);
	printf("5. %6s : %1.0lfcm\n", height_name, height);
	printf("6. %6s : %1.0lfkg\n", weight_name, weight);
	printf("7. %6s : %s\n", address_name, address_sub);

	return 0;
}

// 숙제
// 사칙연산자 : 덧셈(+) , 뺄셈(-), 곱셈(*), 나눗셈(/)
// 1. PI를 저장하는 실수 상수 변수 생성
// 2. 원의 반지름 실수 변수(값은 아무거나 설정)
// 3. 원의 면적 (PI * r ^ 2)
// 
// 숙제2
// 국어 영어 수학 변수 선언(생성) -> 값은 아무거나 적용
// 총점 , 평균 변수들을 생성하고 출력 (56~57)

