#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
	int i, x, y, numrands;
	srand(time(NULL));
	if(argc != 3)
	{
		printf("Please enter limits.\n");
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
	
		if(x>y)
		{
			printf("Minimum limit cannot be greater than maximum limit.\n");
		}
		else
		{
			printf("a)\t%d\n\n", x+rand()%(y-x+1) );
	
			numrands = rand()%(x+1);
			printf("b)");
	
			if(numrands == 0)
			{
				printf("\t(None)\n");
			}
			else
			{		
				for(i=0; i<numrands; i++)
				{
					printf("\t%d\n", rand()%(y+1));
				}
			}
		}

	}

	return 0;
}
