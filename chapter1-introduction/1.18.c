/*program toremove trailing blanks and tabs from each lines of input &delete entire blank lines*/
#include<stdio.h>
#define max 1000
int get(char line[],int lim);
int clear(char rline[])

int main(void)
{
  int len;
  char line[max];
  
  while((len=get(line,max))>0)
    if(clear(line) > 0)
      printf("%s",line);

  return 0;
}


int get(char s[],int lim)
{
  int i,c;

  for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
    s[i] = c;
  if( c == '\n')
  {
    s[i]=c;
    ++i;
  }
  s[i]='\0';
  
  return i;
}



int clear(char s[])
{
  int i;

  for(i=0; s[i]!='\n'; ++i);
  --i;  

  for(i >0; ((s[i] == ' ') || (s[i] =='\t'))

  if( i >= 0) 
  {
    ++i;
    s[i] = '\n';
    ++i;
    s[i] = '\0';
  }
  return i;
}
