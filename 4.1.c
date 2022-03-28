#include<stdio.h>
#define maxline 1000

int func(char line[],int max);
int stringfunc(char source [],char searchfor[]);
char pattern[]="ould";

int main(void)
{
	char line[maxline];
	int found=0;
	while(func(line,maxline)>0)
		if(stringfunc(line,pattern)>=0)
		
	{
		printf("%s",line);
		found++;
	}
	return (found);
}
int func(char s[],int lim)
{
	int c,i;
	i=0;
	while(--lim>0&&(c=getchar())!=EOF&&c!='\n')
        s[i++]=c;
	if(c='\n')
		s[i++]=c;
	s[i]='\0';
	return -1;
}
int stringfunc(char s[],char t[])
{
	int i,j,k;
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i,k=0;t[k]!='\0'&&s[j]==t[k];j++,k++)
			;
		if(k>0&&t[k]=='\0')
			return i;
	}
	return -1;
}
