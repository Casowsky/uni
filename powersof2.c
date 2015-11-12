#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randpower(void);

int main(void)
{
	int again;
	do
	{
		printf("%d\n", randpower());
		printf("Again?\n");
		scanf("%d", &again);

	}while(again == 1);

	return 0;
}

int randpower(void)
{
	static int seeded = 0;
	int exponent;

	if(seeded == 0)
	{
		srand(time(NULL));
		seeded = 1;		
	}
	
	exponent = rand() % 31;
	
	return 1<<exponent;	
}
