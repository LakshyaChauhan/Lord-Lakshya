// to find leap year
#include<stdio.h>
int main()
{
    int yr;
    printf("Year:-");
    scanf("%d",&yr);
    yr%100==0 ?(year%400 ==0 ? printf("Leap Year\n"): printf("Not leap year\n")):
    (year%4 ==0 ? printf("Leap Year\n"): printf("Not leap Year\n"));
    return 0;
}
