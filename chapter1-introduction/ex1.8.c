#include<stdio.h>
int main(void)
{
	int s=0,n=0,t=0,c;
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		{
			++n;
		}
		if(c==' ')
		{
			++s;
		}
		if (c=='\t')
		{
			++t;
		}
	}
	printf("new line= %d\n",n);
	printf("tab=%d\n",t);
	printf("space=%d",s);
	return 0;
} 
