/*char array basic getline func*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXLINE 1000
int data(char line[],int maxline);
void copy (char to[],char from[]);
int main()
{
 int len;
 int max;
 char line[MAXLINE];
 char longest[MAXLINE];
 max=0;
 while((len=data(line,MAXLINE))>0)
	 if(len>max)
	 {
		 max=len;
		 copy(longest,line);
	 }
 if(max>0)
	 printf("%s",longest);
 return 0;
 }
int data(char s[],int l)
{
	int c,i;
	for(i=0;i<l-1&&(c=getchar())!=EOF&&c!='n';++i)
		s[i]=c;
	if(c=='\n')
	{
		s[i]= c;
	++i;
}
s[i]='\0';
return i;
}
void copy(char to[],char from[])
{
	int i;
	i=0;
	while(to[i]=from[i]!='\0')
			++i;
}
