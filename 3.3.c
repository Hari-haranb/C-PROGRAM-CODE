#include<stdio.h>

	int binsearch(int x,int v[],int n)
	{
		int low,high,mid;
		low=0;
		high=n-1;
		while(low<=high)
		{
			mid =(low+high)/2;
			if(x<v[mid])
				high=mid-1;
			else if(x>v[mid])
				low=mid+1;
			else
				return mid;
		}
		return-1;
	}

int main()
{
	int c,l[30]={1,3,5,67,3};
	c=binsearch(20,l,5);
	printf("%d",c);
}
