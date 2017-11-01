#include <stdio.h>
#include "../library/my_function.h"
int main()
{
	int AmountSubject;
	printf("How many subject did you learned : ");
	scanf("%d\n",AmountSubject);
	float grade[AmountSubject];
	int i;
	char subject_name;
	for(i=0;i<AmountSubject;i++)
	{
		printf("What subject did you learned : ", );
		scanf("%c \n",subject_name);
		grade[i]=ReadGrade(subject_name);
	}
	float AverageGrade;
	AverageGrade = SumGradeCounting(grade);
	
}