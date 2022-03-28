#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXLINE 1000
int data(char line[],int maxline);
int main()
{
 int len;
 int max;
 char line[MAXLINE];
 max=0;
 while((len=data(line,MAXLINE))>0)
 {
	 if(len>max)
	 {
	 printf("%s",line);
         max++;
	 }
 }
 return 0;
 }
int data(char s[],int l)
{
	int c,i;
	for(i=0;i<l-1;++i)
	{
		if((c=getchar())!=EOF)
		{
		s[i]=c;
		}
		if(c=='\n')
		{
			break;
		}
		if(c==EOF)
		{
			break;
		}
	}
	if(c=='\n')
	{
		s[i]= c;
	++i;
        }
s[i]='\0';
return i;
}
