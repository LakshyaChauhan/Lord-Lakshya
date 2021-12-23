// find whether triangle is valid or not

#include<stdio.h>
int main()
{
    int angle1,angle2,angle3;
    printf("Angles of triangle:-\n");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    if(angle1+angle2+angle3==180)
        printf("Vaild Triangle");
    else    
        printf("Invalid triangle");
    return 0;
}