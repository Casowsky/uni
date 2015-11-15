#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	FILE* fp = fopen("file.txt", "r");
	fscanf(fp, "%d", &num);
	printf("%d\n", num);
	fscanf(fp, "%d", &num);
	printf("%d\n", num);
	fscanf(fp, "%d", &num);
	printf("%d\n", num);

	fclose(fp);
	return 0;
}
