#include<stdio.h>
int main()
{
	int c,a,b;
	while((c=getchar())!=EOF)
	{
		a=(c>='A'&&c<='Z'?(c+32):(c-32));
		
			printf("%c",a);
		
	}
	return 0;
}
