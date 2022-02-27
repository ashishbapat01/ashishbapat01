#include<stdio.h>
int perfect(int n);

int main()
{
	int a,res=0;
	printf("Enter The Number :-");
	scanf("%d",&a);
	
	res=perfect(a);
	
	if(res==0)
	{
		printf("\nNmuber is perfect number\n");
	}
	else
	{
		printf("\nNumber is not perfect number\n");
	}
	
	return 0;
}
int perfect(int n)
{
	int sum=0,temp=0;
	
	temp=n;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
		if(sum==temp)
		{
			return 0;
		}
		else
		{
			return 1;
		}
}