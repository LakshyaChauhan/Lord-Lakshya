// to find leap year
#include<stdio.h>
int main()
{
    int yr;
    printf("Year:-");
    scanf("%d",&yr);
    if (yr%4==0)
        printf("Leap Year");
    else
        printf("Not a Leap year");
}