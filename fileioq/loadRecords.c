#include <stdio.h>
#include <stdlib.h>
#include "mytypes.h"

Group* loadRecords(char* filename)
{
	Group* group = NULL;
	FILE* file = fopen(filename, "r");
	int i,j;
	if(file != NULL)
	{
		group = (Group*)malloc(sizeof(Group));
		fscanf(file, "%d", &group->nStudents);
		group->students = (Student*)malloc(group->nStudents * sizeof(Student));
		for(i=0;i<(group->nStudents);i++)
		{
			fscanf(file, "%d", &group->students[i].nUnits);
			/*fgets(group->students[i].name,52,file);*/
			fscanf(file, "%s", group->students[i].name);
			group->students[i].units = (Unit*)malloc(group->students[i].nUnits * sizeof(Unit));
			for(j=0;j<(group->students[i].nUnits);j++)
			{
				fscanf(file, "%s %f", group->students[i].units[j].code, &group->students[i].units[j].mark);
			}
		}

		fclose(file);
	}

	return group;
}




