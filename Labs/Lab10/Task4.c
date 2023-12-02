/*
 * Creator: Muhammad Abser Mansoor
 * Date: 20/11/23
 * Description: reverse each word in a sentence but do not reverse the order of the words
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *rev_str(char *str, int size) {
	char *new_str = (char *)malloc(size+2);
	*new_str = '\0', strncat(new_str, str, size);
	for (int i = 0; i < size/2; i++) {
		char temp = new_str[i];
		new_str[i] = new_str[size - i -1], new_str[size - i -1] = temp;
	}
	strcat(new_str, " ");
	return new_str;
}


char *spin_str(char *str) {
	char *new_str = (char *)malloc(strlen(str)+1), *front = str, *back = str;
	memset(new_str, '\0', strlen(str)+1);
	while (*front) {
		if (*(front + 1) == '\0' || *(front + 1) == ' ')  {
			char *rev = rev_str(back, front-back+1);
			strcat(new_str, rev), back = front+2;
			free(rev);
		}
		front++;
	}
	new_str[strlen(str)] = '\0';
	return new_str;
}


int main() {
	char str[] = "Hello World!", *spun_str = spin_str(str);
	printf("%s", spun_str);
	free(spun_str);
	return 0;
}
