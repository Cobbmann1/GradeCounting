#include "../library/my_function.h"
float ReadGrade(string msg)
{
	char grade ;
	float NumbericGrade;
	printf("your %s grade is : (in Capital Letter)",msg);	
	scanf("%c\n",grade);
	if(grade == A)
	{
		NumbericGrade = 4;
	}
	if(grade == B)
	{
		NumbericGrade = 3;
	}
	if(grade == C)
	{
		NumbericGrade = 2;
	}
	if(grade == D)
	{
		NumbericGrade = 1;
	}
	if(grade == F)
	{
		NumbericGrade = 0;
	}
	if(grade == B+)
	{
		NumbericGrade = 3.5;
	}
	if(grade == C+)
	{
		NumbericGrade = 2.5;
	}
	if(grade == D+)
	{
		NumbericGrade = 1.5;
	}
	else
	{
		printf("Error,please input your grade again\n", );
		NumbericGrade = ReadGrade(msg);
	}
	return NumbericGrade;
}