#include <stdio.h>

int main(void) {

// Signed 정수 자료형 실습 + 표현범위초과
	//signed char a = 255;
	//printf("변수 값은 : %d\n", a);

	//a = a + 1;
	//printf("변수 값은 : %d\n", a);

// Unsigned 정수 자료형 실습
	//signed char a = -10;
	//printf("%d", a);

// 실수 자료형 실습
	//float a = 1.0;
	//printf("%f\n", a);
	//float a = 0.1;
	//printf("%f\n", a);
	//float a = -5.6;
	//printf("%f\n", a);
	//float a = 346.765;
	//printf("%f\n", a);

	//float a = 0.1;
	//printf("%.100f", a);
	//float a = 1e-45;
	//printf("%.100f", a);
	//float a = 1e-46;
	//printf("%.100f", a);

// 자료형의 크기 확인

	//char a = 1;
	//int b = 1;
	//float c = 1.f;
	//double d = 1.0;

	//printf("%d\n", (int)sizeof(a));
	//printf("%d\n", (int)sizeof(b));
	//printf("%d\n", (int)sizeof(c));
	//printf("%d\n", (int)sizeof(d));

// 숫자 맞바꾸기
	//int a = 10;
	//int b = 20;
	//
	//printf("a : %d\n", a);
	//printf("b : %d\n", b);

// 산술연산자
	//int a = 12, int b = 5;

	//printf("%d\n", a + b);
	//printf("%d\n", a - b);
	//printf("%d\n", a * b);
	//printf("%d\n", a / b);
	//printf("%d\n", a % b);

	//int a = 12;
	//float b = 16.0 / 3;
	//float c = 16;

	//printf("%f\n", a);
	//printf("%f\n", b);
	//printf("%f\n", c / 3);

// (명시적) 형변환

	//float c = 3.14f + 16;
	//printf("%f\n", c);

	//int a = 15;
	//float b = 3.14;
	//
	//float result = (float)a + b;
	//printf("%f\n", result);

// 복합 대입 연산자 실습
	//int a = 10;
	//printf("%d\n", a);

	//a += 3;
	//printf("%d\n", a);

	//a += 5;
	//printf("%d\n", a);

	//a = 10;
	//printf("%d\n", a);

	//a = a + 3;
	//printf("%d\n", a);

	//a = a + 5;
	//printf("%d\n", a);

// 전위 연산
	//int a = 0;

	//printf("%d\n", a);
	//printf("%d\n", ++a);
	//printf("%d\n", a);

	//a = 0;

	//printf("%d\n", a);
	//printf("%d\n", a++);
	//printf("%d\n", a);

// 산술연산자2
	//char a = 126;
	//
	//printf("%d\n", a++);
	//printf("%d\n", a++);
	//printf("%d\n", a++);
	//printf("%d\n", a++);


	//a = -127;

	//printf("%d\n", a--);
	//printf("%d\n", a--);
	//printf("%d\n", a--);
	//printf("%d\n", a--);

// 논리연산자
	//int a = 5, b = 12;
	//int result1, result2, result3, result4;

	//result1 = (a == 5 && b == 12);
	//result2 = (a == 5 && b == 13);
	//result3 = (a == 6 && b == 12);
	//result4 = (a == 6 && b == 13);

	//printf("%d", result2);

// 비트연산자
	//char a = 37;
	//char b = 114;

	//printf("%d\n", a & b);
	//printf("%d\n", a | b);
	//printf("%d\n", ~a);
	//printf("%d\n", (char)(a << 2));
	//printf("%d\n", (char)(a >> 2));

	//printf("%d\n", !a);
	//printf("%d\n", ~a);
}