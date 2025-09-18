int main(void) {
	int a[4][4];
	int k = 0;
	int b[4];
	srand(time(NULL));
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 4;j++) {
			a[i][j] = rand() % 100 + 1;
			k += a[i][j];
			printf("%d ", a[i][j]);
		}
		printf("\n");
		b[i] = k;
		k = 0;
	}
	printf("\n");
	for (int i = 0;i < 4;i++) {
		printf("%d ", b[i]);
	}
}
