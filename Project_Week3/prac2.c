#include <stdio.h>

int main(void) {

	char stud_name[] = "박시형";
	int stud_num = 2026440047;
	double stud_gpa = 4.50; // 어림도없다ㅠ


	printf("서울시립대학교\n전자전기컴퓨터공학부\n");
	printf("이름 : %s\n", stud_name);
	printf("학번 : %d\n", stud_num);
	printf("학점 : %.2f\n", stud_gpa);

}