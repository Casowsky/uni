#include <stdio.h>
#include <stdlib.h>
#include "mytypes.h"

void calculateCWA(Student* st)
{
	int i;
	float cwa, markSum=0.0, markMax;
	
	markMax = 100.0*(st->nUnits);
	for(i=0;i<(st->nUnits);i++)
	{
		markSum += st->units[i].mark;
	}
	cwa = 100.0*markSum/markMax;
	printf("%s:%.2f\n", st->name, cwa);
}
