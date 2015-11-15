typedef struct
{
	char code[4];
	float mark;
}Unit;

typedef struct
{
	Unit* units;
	int nUnits;
	char name[51];
}Student;

typedef struct
{
	Student* students;
	int nStudents;
}Group;
