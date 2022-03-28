/* number of occurrences of each digit*/
#include<stdio.h>
int main()
{
	int c,i,w,ot;
	int digit[10];
	w=ot=0;
	for(i=0;i<10;++i)
		digit[i]=0;
	while((c=getchar())!=EOF)
		if(c>='0'&&c<='9')
			++digit[c-'0'];
		else if (c==' '||c=='\n'||c=='\t')
			w++;
		else
			++ot;
		printf("\n digits=");
		for(i=0;i<10;++i)
			printf("%d",digit[i]);
		printf("whspace=%d,other=%d\n",w,ot);
}
