// interchanging two variables
#include<stdio.h>

int main()
{
    int a , b, t;
    printf("Entre values of a and b\n");
    scanf("%d %d",&a,&b);

    printf("a=%2d\tb=%2d",a,b);

    t=a; a=b; b=t;

    printf("\nInter changed Values:- a=%2d\tb=%2d",a,t);
    return 0;
}