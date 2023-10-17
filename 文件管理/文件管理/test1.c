#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum{size=5};
int main()
{
	double a[size] = { 1.,2.,3.,4.,5. };
	FILE* fp = fopen("test.txt", "wb");
	fwrite(a, sizeof(*a), size, fp);
	fclose(fp);

	double b[size];
	fp = fopen("test.txt", "rb");
	size_t ret_code = fread(b, sizeof(*b), size, fp);
	if (ret_code == size)
	{
		puts("Array read successfully,contents:");
		int n = 0;
		for (n = 0; n < size; n++)
			printf("%f ", b[n]);
		putchar('\n');
	}
	else
	{
		if (feof(fp))
			printf("Error reading test.txt:unexpected end of file\n");
		else if (ferror(fp))
			perror("Error reading test.txt\n");
	}
	fclose(fp);
	fp = NULL;
	printf("%s ", __FILE__);
	return 0;
}