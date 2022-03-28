/* histogram of the lengths of words*/
#include<stdio.h>
int main()
{
	int c;
	while((c=getchar())!=EOF)
	{
		if( c==' '||c=='\n'||c=='\t')
		{
		//	printf("\n");
		         putchar('\n');
		}
			else
				//printf("*");
				putchar('*');
                        }
	return 0;
}

