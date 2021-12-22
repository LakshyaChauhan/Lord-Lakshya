// Program to calculate sum of five digits
// We will divide number by 10 and usimg modulous operater
#include<stdio.h>
int main()
{
    int N, num ,n1,n2,n3,n4,n5;
    
    printf("Enter five digit number:-\n");
    scanf("%d",&num);

    n1=num%10;
    num=num/10;

    n2=num%10;
    num=num/10;

    n3=num%10;
    num=num/10;

    n4=num%10;
    num=num/10;
    
    n5=num%10;
    num=num/10;

    N=n1+n2+n3+n4+n5;

    printf("Sum of numbers of five digit number:-%4d",N);

    return 0;

}