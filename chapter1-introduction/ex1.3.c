#include<stdio.h>
int main()
{
int F,C;
int lower=0,upper=300,step=20;
F=lower;
printf("fahrenheit\tcelsius\n");

while(F<=upper)
{
	C=5*(F-32)/9;
	printf("%d\t%d\n",F,C);
	F= F+step;
}
return 0;
}

