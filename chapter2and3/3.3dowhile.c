#include<stdio.h>
int main()
{
  int number, total=0,i=0;
  printf("\n Please enter any num below 10 \n");
  scanf("%d", &number);
  do
   {
     for(;number<=0;)
     {
         break;
     }
          total = total + number;

     printf(" Number = %d\n", number);
     printf(" Total Value is: %d\n", total); 
     number++;
   }while (number< 10);

  printf(" Total Value from outside the Loop is: %d \n", total);
  return 0;
}

