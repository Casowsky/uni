#include <stdio.h>

int main(int argc, int *argv[])
{
	if(argc<2)
	{
		printf("Error: Please give arguments to be reversed.\n");
	}
	else
	{
		int i;
		for(i=0;i<argc-1;i++)
		{
			printf("%s\n", argv[argc-1-i]);
		}
	}

	return 0;
}
