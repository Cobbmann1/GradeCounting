#include "../library/my_function.h"
float SumGradeCounting(float grade[])
{
	float SumGrade = 0,Average;
	int i ;
	for(i=0;i<sizeof(grade)/4;i++)
	{
		SumGrade+=grade[i];
	}

	Average = SumGrade();
}