/*func reverse the charecter string*/
#include<stdio.h>
#define MAXLINE 1000
int func(char a[], int l);
int main()
{
  int len,k,i;
  char a[MAXLINE],b[MAXLINE];

  while((len = func(a,MAXLINE)) > 0)
  {
    for(k=0,i=len-1;k<len,i>0;k++,i--) 
	

	 b[k] = a[i];
  }
     ++k;
     b[k]='\0';
 
    printf("%s",b);
    
  return 0;
}

int func(char s[], int l)
{
  int i,c;
  for(i =0;i<l-1 &&(c=getchar())!=EOF&& c!='\n'; ++i)
    s[i] = c;
  if(c == '\n')
  {
   s[i] = c;
   ++i;
  }
    s[i] = '\0';

  return i;
}
