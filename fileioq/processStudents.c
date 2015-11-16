#include <stdio.h>
#include <stdlib.h>
#include "mytypes.h"
#include "processStudents.h"

void processStudents(FuncPtr calc, Group* gr)
{
	int i;
	for(i=0;i<(gr->nStudents);i++)
	{
		(*calc)(&gr->students[i]);
	}
}
