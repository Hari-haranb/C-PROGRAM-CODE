#include<stdio.h>
int main()
{
	int x=8,p=3,n=3,a;
	a=(x^(~(~0<<n)<<(p+1-n)));
	printf("%d",a);
	return 0;
}
