int main(void) {
	int n;
	int* a;
	printf("Print size: \n");
	scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	srand(time(NULL));
	for (int i = 0;i < n;i++) {
		a[i] = rand() % 100 + 1;
		printf("%d ", a[i]);
	}
}
