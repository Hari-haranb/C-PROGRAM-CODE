include<stdio.h>
int main()
{
        int c;
        while((c=getchar())!=EOF)
        {
                if( c==' '||c=='\n'||c=='\t')
                {
			++i;
                        printf("escape sequence%d\n",i );
                         putchar('\n');
                }
                        else
                                //printf("*");
                                putchar('*');
                        }
        return 0;
}

