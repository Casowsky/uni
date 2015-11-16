#include <stdio.h>
#include <string.h>
#include "mytypes.h"

void calculateCWA(Student* st)
{
	int i;
	float cwa, markSum=0.0, markMax;
	
	/*printf("nUnits = %d\n", st->nUnits);*/
	markMax = 100.0*(st->nUnits);
	/*printf("markMax = %f\n", markMax);*/
	for(i=0;i<(st->nUnits);i++)
	{
		/*printf("markSum before:%f", markSum);*/
		markSum += st->units[i].mark;
		/*printf("markSum after:%f\n", markSum);*/
	}
	cwa = 100.0*markSum/markMax;
	/*printf("markSum = %f markMax = %f cwa = %f\n", markSum, markMax, cwa);*/
	printf("%s:%.2f\n", st->name, cwa);
}
