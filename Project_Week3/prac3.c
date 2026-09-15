#include <stdio.h>

int main(void) {

	// #1
	double num1, num2;

	printf("숫자 1 입력 : ");
	scanf_s("%lf", &num1);

	printf("숫자 2 입력 : ");
	scanf_s("%lf", &num2);

	printf("%lf - %lf = %lf", num1, num2, num1 - num2);

	// #2
	printf("\n");
	int num3, num4;

	printf("숫자 1 입력 : ");
	scanf_s("%d", &num3);

	printf("숫자 2 입력 : ");
	scanf_s("%d", &num4);

	printf("몫 : %d, 나머지 : %d", num3 / num4, num3 % num4);

}