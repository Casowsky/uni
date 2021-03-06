#include <stdio.h>
#include <stdlib.h>

#include "mytypes.h"
#include "loadRecords.h"
#include "calculateCWA.h"
#include "processStudents.h"

int main(int argc, char* argv[])
{
	char* filename = argv[1];
	Group* studentGroup = loadRecords(filename);
	void (*FuncPtr)(Student*) = &calculateCWA;
	processStudents(FuncPtr, studentGroup);

	return 0;
}
