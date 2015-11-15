#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Unit.h"
#include "Student.h"
#include "Group.h"

Group* loadRecords(char* filename)
{
	Group* group = NULL;
	FILE* file = fopen(file, "r");
	int i,j;
	if(file != NULL)
	{
		group = (Group*)malloc(sizeof(Group));	// Create a group of students
		fscanf(file, "%d", &group->nStudents);	// Get first number, number of students in file
		group->students = (Student*)malloc(group->nStudents * sizeof(Student));	// Create an array of that many students
		for(i=0;i<(group->nStudents);i++)
		{
			fscanf(file, "%d", &group->students[i].nUnits);	// Get number of units that student has
			fgets(group->students[i].name,52,file);	// Read their name
			group->students[i]->units = (Unit*)malloc(group->students[i].nUnits * sizeof(Unit));
			for(j=0;j<(group->students[i].nUnits);j++)
			{
				fscanf(file, "%s %f", group->students[i]->units[i].code, &group->students[i]->units[i].mark);
			}
		}
		(Student*)malloc(2 * sizeof(Student));

		fclose(file);
	}

	return group;
	// Calling function will need to free each student's units array, the group's
	// students array, and the group
}




