#include <stdio.h>
#include <stdlib.h>
#include "randimport.h"

int main(int argc, char *argv[])
{
	int i, j;
	if(argc != 3)
	{
		printf("Incorrect arguments.\n");
	}
	else
	{
		printf("%d\n", randimport(atoi(argv[1]), atoi(argv[2])));
	}
	
	return 0;
}
