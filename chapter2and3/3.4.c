/*num of const int values by switch case*/
#include<stdio.h>
int main()
{
	int c,i,nwhite,nother,ndigit[10];
	nwhite=nother=0;
	for(i=0;i<10;i++)
		ndigit[i]=0;
	while((c=getchar())!=EOF)
	{
		switch(c)
		{
			case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9'://if(c>='0'&&c<='9')
				ndigit[c-'0']++;
				break;
			case ' ': //else if (c==' '||c=='\n||c=='\t')
			case '\n':
			case '\t':
		             nwhite++;
		             break;
			default:
		            nother++;
		            break;
		}
	}		
	printf("digits=");
        for(i=0;i<10;i++)
           printf("%d",ndigit[i]);
           printf(",white space=%d,others=%d\n",nwhite,nother);
   return 0;
}
