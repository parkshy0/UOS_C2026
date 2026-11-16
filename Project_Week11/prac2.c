#include <stdio.h>

void swap(int *a, int *b);

int main() {

	int num1 = 1227, num2 = 2007;

	swap(&num1, &num2);
	printf("num1 value : %d\nnum2 value : %d\n", num1, num2);

}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}