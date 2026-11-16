#include <stdio.h>

void apply_discount(int* price, int n, int percent);
void print_prices(int* price, int length);

int main() {
	int price[5] = {12000, 8500, 3000, 45000, 990};
	int percent = 0;

	printf("할인율(%%)을 입력하시오 : ");
	scanf_s("%d", &percent);

	printf("할인 전 : ");
	print_prices(price, 5);

	apply_discount(price, 5, percent);

	printf("\n할인 후 : ");
	print_prices(price, 5);
}

void apply_discount(int* price, int n, int percent) {
	for (int i = 0; i < n; i++) {
		price[i] -= (price[i] * ((double)percent / 100));
	}
}

void print_prices(int* price, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", price[i]);
	}
}