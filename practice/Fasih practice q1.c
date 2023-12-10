struct Employee {
	char id[100];
	char fn[100];
	char ln[100];
	int rate;
	int hrs;
};

void main() {
	struct Employee e[100];
	char *buf;
	char blacklist[100];
	int salaries[100];
	printf("Enter Undersirable name ");
	scanf("%s",blacklist);
	char blfn[100];
	char blln[100];
	strcpy(blfn,strtok(blacklist," "));
	strcpy(blln,strtok(blacklist,","));
	FILE *f = fopen("Combine.txt","a");
	for (int i = 0;i < 2;i++) {
		printf("id ");
		scanf("%s",e[i].id);
		printf("first name ");
		scanf("%s",e[i].fn);
		printf("last name ");
		scanf("%s",e[i].ln);
		printf("rate ");
		scanf("%d",&e[i].rate);
		printf("weekly hours ");
		scanf("%d",&e[i].hrs);
		salaries[i] = e[i].rate * e[i].hrs;
		if (!(strcmp(e[i].fn,blfn) && strcmp(e[i].ln,blln))) {
			printf("GTFO Dirty Jew\n ");
			continue;
		}
		else {
			fprintf(f,"%s,%s,%s,%d,%d \n",e[i].id,e[i].fn,e[i].ln,e[i].rate,e[i].hrs);
		}
	}
	int pos  = 0;
	for (int i = 0; i < 2;i++) {
		for (int j = 0; j < 2;j++) {
			if (salaries[i] < salaries[j]) {
				pos++;
			}
		}
		int temp = salaries[pos];
		salaries[pos] = salaries[i];
		salaries[i] = temp;
	}
	for (int i = 0;i < 2;i++) {
		printf("%d ",salaries[i]);
	}
}
