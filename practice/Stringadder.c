#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *shift(char *arr,int m) {
	char *shifted = (char *)calloc(100,sizeof(char));
	for (int i = strlen(arr)+m;i >= 0;i--) {
		printf("%d ",i);
		if (i < m) {
			shifted[i] = '0';
		}
		else {
		    shifted[i] = arr[i-m];
		}
	}
	printf("%s\n",shifted);
	for (int i = 0;i <= strlen(shifted);i++) {
		printf("%c ",shifted[i]);
	}
	return shifted;
}

char *adder(char str1[],char str2[]) {
	int lim = 0;
	int rem = 0;
	char *res = (char *)calloc(1000, sizeof(char));
	if (strlen(str1) > strlen(str2)) {
	    printf("Str 1 is greater \n");
		lim = strlen(str1);
		int m = strlen(str1) - strlen(str2);
		char *temp = shift(str2,m);
		for (int i = lim;i >= 0;i--) {
			res[i] = (str1[i]-48) + (temp[i]-48) + rem;
			if (rem > 0) {
			    printf("remainder = %d\n",rem);
			    rem = 0;
			}
			if (res[i] > 9 && res[i] < 20) {
				rem = res[i]/10;
				res[i] = res[i]%10;
			}
			else if (res[i] >= 20) {
			    rem = res[i]/10;
				res[i] = res[i]%20;
			}
			res[i] += 48;
	}
	printf("\n");
	for (int i = 0;i <= strlen(res);i++) {
		printf("%c ",res[i]);
	}
	return res;
	}
	else if (strlen(str2) > strlen(str1)) {
	    printf("Str 2 is greater \n");
		lim = strlen(str2);
		int m = strlen(str2) - strlen(str1);
		char *temp = shift(str1,m);
		for (int i = lim;i >= 0;i--) {
			res[i] = (str2[i]-48) + (temp[i]-48) + rem;
			if (rem > 0) {
			    printf("remainder = %d\n",rem);
			    rem = 0;
			}
			if (res[i] > 9 && res[i] < 20) {
				rem = res[i]/10;
				res[i] = res[i]%10;
			}
			else if (res[i] >= 20) {
			    rem = res[i]/10;
				res[i] = res[i]%20;
			}
			res[i] += 48;
	}
	printf("\n");
	for (int i = 0;i <= strlen(res);i++) {
		printf("%c ",res[i]);
	}
	return res;
	}
	else {
		lim = strlen(str1);
	}
	for (int i = lim;i >= 0;i--) {
			res[i] = (str1[i]-48) + (str2[i]-48) + rem;
			if (rem > 0) {
			    printf("remainder = %d\n",rem);
			    rem = 0;
			}
			if (res[i] > 9 && res[i] < 20) {
				rem = res[i]/10;
				res[i] = res[i]%10;
			}
			else if (res[i] >= 20) {
			    rem = res[i]/10;
				res[i] = res[i]%20;
			}
			res[i] += 48;
	}
	return res;
}

void main() {
	char *result = adder("1213131313123545345","1230814148482948234");
	char *ans = "2443945461606493579";
	printf("\n%s\n%s",ans,result);
}
