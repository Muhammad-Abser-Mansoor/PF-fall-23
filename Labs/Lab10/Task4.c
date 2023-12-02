/*
 * Creator: Muhammad Abser Mansoor
 * Date: 20/11/23
 * Description: reverse each word in a sentence but do not reverse the order of the words
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(char *str, int size) {
	char *news = (char *)malloc(size+2);
	*news = '\0', strncat(news, str, size);
	for (int i = 0; i < size/2; i++) {
		char temp = news[i];
		news[i] = news[size - i -1], news[size - i -1] = temp;
	}
	strcat(news, " ");
	return news;
}


char *spin(char *str) {
	char *news = (char *)malloc(strlen(str)+1), *front = str, *back = str;
	memset(news, '\0', strlen(str)+1);
	while (*front) {
		if (*(front + 1) == '\0' || *(front + 1) == ' ')  {
			char *rev = reverse(back, front-back+1);
			strcat(news, rev), back = front+2;
			free(rev);
		}
		front++;
	}
	news[strlen(str)] = '\0';
	return news;
}


int main() {
	char str[] = "Hello World!", *spun = spin(str);
	printf("%s", spun);
	free(spun);
	return 0;
}
