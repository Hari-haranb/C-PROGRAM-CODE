/*cel to fahr temp*/
#include<stdio.h>
int main()
{
int F,C;
int lower=0,upper=148,step=11;
C=lower;
printf("celsius\tfahrenheit\n");
while(C<=upper)
{
        F=C*(9/5)+32;;
        printf("%d\t%d\n",C,F);
        C= C+step;
}
return 0;
}

