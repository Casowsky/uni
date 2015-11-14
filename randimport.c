#include <stdlib.h>
#include <time.h>

int randimport(int max, int min)
{
	srand(time(NULL));
	return min + rand() % (max-min + 1);
}
