/* temp conversion proram reverse table*/
#include<stdio.h>
#define lower 0
#define higher 300
#define size 20
int main()
{
	//int lower,size,higher;
	float F,C;
	printf("FAHR\tCELSIUS\n");
	for(F=higher;F>=lower;F=F-size)
	{
	 printf("%3.1f\t%6.2f\n",F,(5.0/9.0)*(F-32));
	}
} 
