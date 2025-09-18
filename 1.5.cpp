int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 1;
	int select = 0;
	char filtr[16];
	int filtnum;
	typedef struct
	{
		char famil[16], name[16], facult[16];
		int Nomzach;
	} univ;
	printf("Print student's sum: ");
	scanf_s("%d", &n);
	univ stud[50];
	for (int i = 0;i < n;i++)
	{
		printf("\n\n%d.", (i + 1));
		printf("\nPrint second name: ");
		scanf("%s", stud[i].famil);
		printf("\nPrint name: ");
		scanf("%s", stud[i].name);
		printf("\nPrint faculty name: ");
		scanf("%s", stud[i].facult);
		printf("\nPrint student record-book number: ");
		scanf_s("%d", &stud[i].Nomzach);
	}
	printf("\nStudent's : ");
	for (int i = 0;i < n;i++)
	{
		printf("\n%d) %s %s %s %d", (i + 1), stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);

	}
	printf("\n\nSelect\n1.second name\n2.name\n3.facult name\n4.student record-book number\n ");
	scanf_s("%d", &select);
	switch (select) {
	case(1):
		printf("Print second name: ");
		scanf("%s", filtr);
		for (int i = 0;i < n;i++) {
			if (strcmp(filtr, stud[i].famil) == 0) {
				printf("\n%d) %s %s %s %d", (i + 1), stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	case(2):
		printf("Print name: ");
		scanf("%s", filtr);
		for (int i = 0;i < n;i++) {
			if (strcmp(filtr, stud[i].name) == 0) {
				printf("\n%d) %s %s %s %d", (i + 1), stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	case(3):
		printf("Print facult name: ");
		scanf("%s", filtr);
		for (int i = 0;i < n;i++) {
			if (strcmp(filtr, stud[i].facult) == 0) {
				printf("\n%d) %s %s %s %d", (i + 1), stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	case(4):
		printf("Print record-book number: ");
		scanf_s("%d", &filtnum);
		for (int i = 0;i < n;i++) {
			if (filtnum == stud[i].Nomzach) {
				printf("\n%d) %s %s %s %d", (i + 1), stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	default:
		printf("Incorrect numb!");
		break;
	}
}
