void calculateCWA(Group* gr)
{
	Student* st = gr->students;
	int i,j;
	float cwa, markSum=0.0, markMax;
	
	for(i=0;i<(gr->nStudents);i++)
	{
		markMax = 100.0*(st[i].nUnits);
		for(j=0;j<(st[i].nUnits);j++)
		{
			markSum += st[i].units[j].mark;
		}
		cwa = 100.0*markSum/markMax;
		printf("%s:%.2f\n", st[i].name, cwa);
	}
}
