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
		if ((*p >= 'A') && (*p <= 'Z')) *p += 32;
		// 수정 완
	}

	printf("소문자 : %s\n", str);
	// 수정 완
	printf("글자 수 (공백 제외) : %d\n", cnt);
}