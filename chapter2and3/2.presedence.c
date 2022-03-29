#include<stdio.h>
int main()
{
	int a=9,b=4,c=12,x,y;
	x=((a^b<<5)&&(c&a||b)<<b);
	y=(((x&a)||b)&(c|x<<3));
	printf("value of x=%d\n value of y=%d",x,y);
	return 0;
}
