/*test power function*/
#include<stdio.h>
int power(int m,int n);

int main()
{
	int i;
	for(i=0;i<10;++i)
	{
		printf("%d%d\n",power(2,i),power(-3,i));
	}
           return 0;	
}
int power(int b,int n)
{
	int i,p;
	p=1;
	for(i=1;i<=n;++i)
	{
		p=p*b;

	}
		return p;
	}
