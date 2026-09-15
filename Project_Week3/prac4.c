#include <stdio.h>

int main(void) {

	char stud_name[30], stud_major[30];
	int stud_bday;

	printf("이름 입력 : ");
	scanf_s("%s", stud_name, sizeof(stud_name));

	printf("소속 학과 입력 : ");
	scanf_s(" %s", stud_major, sizeof(stud_major));

	printf("생일 입력 (YYYYMMDD) : ");
	scanf_s(" %d", &stud_bday);

	printf("서울시립대학교\n%s\n", stud_major);
	printf("이름 : %s\n생일 : %8d", stud_name, stud_bday);

}