#include<stdio.h>
int main()
{
	int x;
	printf("Enter Value:");
	scanf("%d",&x);
	if(x%2==0)
		printf("Number is even",x);
	else
		printf("Number is odd",x);
	return 0;
}