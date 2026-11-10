#include <stdio.h>
#include <string.h>

int main() {

	int cnt = 0;
	char str[100];

	printf("영문 문장을 입력하시오: ");
	if (fgets(str, sizeof(str), stdin) == NULL) {
		return 1;
	}
	str[strcspn(str, "\n")] = '\0';

	for (char* p = str; *p != '\0'; p++) {
		if (*p != ' ') cnt++;
		// 위 조건식에 strcmp(p, " ") != 0 을 쓰면 안되는 이유?
		// p는 현재 탐색 중인 메모리 주소를 가리키는 포인터임.
		// C언어에서 strcmp(p, " ")를 호출하면, p가 가리키는 위치부터 문자열의 끝(\0)을 만날 때까지의 p가 가리키는 전체 문자열(!)과 " "을 비교하기 때문이라고 함.
		// 그리고 strcmp는 비교자와 피비교자가 서로 같을 때 0을 반환함..
		if ((*p >= 'a') && (*p <= 'z')) *p -= 32;
		// *p -= 32를 해야 무한 루프에 안 빠짐..
	}

	printf("대문자 : %s\n", str);
	printf("글자 수 (공백 제외) : %d\n", cnt);
}