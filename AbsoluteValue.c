// absoulute value is the distance of a number from number line
#include<stdio.h>
int main()
{
    int a;
    printf("enter number  ");
    scanf("%d",&a);
    if(a>0)        
        printf("Absolute Number:-  %d",a);
    else
    {
        a=-1*a;
        printf("Absolute Number:-   %d",a);
    }
    return 0;
}