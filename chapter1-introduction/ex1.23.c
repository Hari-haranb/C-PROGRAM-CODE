#include<stdio.h>

int rmcmt(int c);
int incmt();
int func(int c);

int main()
{
    int c,d;

    printf("  String \n");

    while((c=getchar())!=EOF)
        rmcmt(c);

    return 0;
}

int rmcmt(int c)
{
    int d;

    if( c == '/')
    {
        if((d=getchar())=='*')
         incmt();
        else if( d == '/')
        {
            putchar(c);
            rmcmt(d);
        }
        else 
        {
            putchar(c);
            putchar(d);
        }
    }
    else if( c == '\''|| c == '"')
        func(c);
    else
        putchar(c);

}

int incmt()
{
    int c,d;
     
    c = getchar();
    d = getchar();

    while(c!='*' || d !='/')
    {
        c =d;
        d = getchar();
    }
}

int func(int c)
{
    int d;

    putchar(c);
    
    while((d=getchar())!=c)
    {
        putchar(d);
        
        if(d == '\\')
            putchar(getchar());
    }
    putchar(d);
}
