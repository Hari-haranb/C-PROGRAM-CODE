#include<stdio.h>
#define value 1000

int func(char line[],int maxline);
void squeeze(char s1[],char s2[]);

int main(void)
{
    char s1[value],s2[value];
    
    putchar('s');
    putchar('1');
    func(s1,value);

    putchar('s');
    putchar('2');
    func(s2,value);

    squeeze(s1,s2);

    printf("%s",s1);

    return 0;
}

int func(char s[],int lim)
{
    int i,c;
    
    for(i=0;i<lim-1 && (c=getchar())!=EOF && c != '\n';++i)
        s[i] = c;

    if(c == '\n')
        s[i++] = c;
    
    s[i] = '\0';
}

void squeeze(char s1[],char s2[])
{
    int i,j,k;
    k=0;

    for(i=0;s1[i]!='\0';++i)
    {
        for(j=0; (s1[i]!=s2[j]) && s2[j]!='\0' ;++j);
        if(s2[j]=='\0')
            s1[k++] = s1[i];
    }
    
    s1[k]='\0';
}
