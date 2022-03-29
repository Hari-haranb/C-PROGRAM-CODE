#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
   int v;
   char str[20];
   
   strcpy(str, "8072487383");
   v = atoi(str);
   printf("String = %s, Int value = %d\n", str, v);

   strcpy(str, "linumiz");
   v = atoi(str);
   printf("String value = %s, Int value = %d\n", str, v);

   return 0;
}
