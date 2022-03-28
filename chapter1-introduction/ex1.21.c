/*program entab that replace string of blanks by min num of tab &blanks to achive same space*/
*#include<stdio.h>
int main()
{
    int b,t,pos,c;   
    b = 0;
    t = 0;
    
    for(pos=1;(c=getchar())!=EOF;++pos)
        if( c == ' ')
        {
            if((pos % 8) != 0)
                ++b;
            else
            {
                b = 0;
                ++t;
            }
        }
        else 
        {
            for(;t > 0 ; --t)
                putchar('\t');
            if( c == '\t')
                n= 0;
            else
                for( ;b > 0;--b)
                    putchar(' ');         
            putchar(c);
            
            if(c == '\n')
                pos = 0;
            else if ( c == '\t')
                pos = pos + ( 8- (pos -1) % 8) - 1;
        }
    return 0;
}
