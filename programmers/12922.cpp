// 수박수박수박수?

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {

	// n은 글자수와 같다
	// 한글은 2바이트로 알고 있으나 3바이트로 해야 문제가 풀림
	// '(n*3)'은 글자 하나의 공간, +1은 '\0'이 들어갈 공간
	char * answer = (char*)malloc(sizeof(char)*(n * 3) + 1);

	// 짝수 번지에는 "수"를, 홀수 번지에는 "박"을 넣는 동작
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)  strcpy(answer + (i * 3), "수");
		else strcpy(answer + (i * 3), "박");
	}

	return answer;
}

/**
 * strcpy 문자열 복사 함수
*/