#include<stdio.h>
int cel_to_fahr(int);
int fahr_to_cel(int);
int main()
{

	int f,o,c;
	printf("no 1 for cel to fahr & no 2 for fahr to cel =");
	while((c=getchar())!=EOF)
	{
		if(o=='1');
		{
			printf("enter the celcius temp");
			scanf("%d",&c);
			cel_to_fahr(c);
		}
		if(c=='2');
		{
			printf("enter the the fahr temp");
			scanf("%d",&f);
			fahr_to_cel(f);
		}

	}
	return 0;
}

int cel_to_fahr(int c)
{
      float  f;
      f=c*(9/5)+32;
      printf("fahr=%0.2f",f);
}
int fahr_to_cel(int f)
{
	float c;
	c=(5/9)*(f-32);
	printf("celsius=%0.3f",c);
}
