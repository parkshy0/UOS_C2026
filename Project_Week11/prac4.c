#include <stdio.h>

void to_hms(int total, int* h, int* m, int* s);

int main() {
	int t = 0;
	int h; int m; int s;

	printf("총 시간(초)을 입력하시오 : ");
	scanf_s("%d", &t);

	to_hms(t, &h, &m, &s);
	printf("%d시간 %d분 %d초", h, m, s);
}

void to_hms(int total, int* h, int* m, int* s) {
	*h = total / (60*60);
	*m = (total % (60*60)) / 60;
	*s = total % 60;
}