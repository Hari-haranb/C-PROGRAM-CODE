/*program to print the all input lines that are longer than 80 lines*/
#include<stdio.h>
#define MAXLINE 1000
int func(char a[], int l);
int main()
{
  int len;
  char a[MAXLINE];

  while((len = func(a,MAXLINE)) > 0)
  {
    if( len > 80 )
    {
      printf("%s",a);
    printf("total number of charecter =%d",len);
    }
    else 
    printf("less than 80 charecters");
  }

  return 0;
}
int func(char s[], int l)
{
  int i,c;
  for(i = 0; i < l-1 && ( c = getchar() )!= EOF && c!='\n'; ++i)
    s[i] = c;
  if(c == '\n')
  {
    s[i] = c;
    ++i;
  }
    s[i] = '\0';

  return i;
}
