#include<stdio.h>
int brace,brack,prn;
void func();
void inquote(int c);
void search(int c);
int main()
{
    int c;
    
    extern int brace, brack, prn;

    while((c=getchar())!=EOF)
        if( c == '/')
            if((c=getchar())== '*')
                func();
            else 
                search(c);
        else if( c == '\'' || c == '"')
            inquote(c);
        else
            search(c);

    if( brace < 0)
    {
        printf("Unmatched Braces\n");
        brace = 0;
    }   
    else if( brack < 0)
    {
        printf("Unmatched brackets\n");
        brack = 0;
    }
    else if( prn < 0)
    {
        printf("Unmatched parenthesis\n");
        prn = 0;
    }
    
if(brace > 0)
        printf("Unmatch braces\n");
    else if(brack > 0)
        printf("Unmatch brackets\n");
    else if(prn > 0)
        printf("Unmatch parenthesis\n"); 

    return 0;
}

void func()
{
    int c,d;
    
    c = getchar();
    d = getchar();

    while(c != '*' || d != '/')
    {
        c = d;
        d = getchar();
    }
}

void inquote(int c)
{
    int d;

    putchar(c);

    while((d=getchar())!=c)
        if( d == '\\')
            getchar();
}

void search(int c)
{
    extern int brace,brack,prn;

    if ( c == '{')
        --brace;
    else if ( c == '}')
        ++brace;
    else if( c == '[')
        --brack;
    else if( c == ']')
        ++brack;
    else if( c == '(')
        --prn;
    else if( c == ')')
        ++prn;
}

