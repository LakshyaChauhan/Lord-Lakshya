// Check whether triangle is valid or not using sum of two sides of triangle greater than the third side
#include<stdio.h>
int main()
{
    int s1,s2,s3 , sum, largeS;
    printf("Enter sides of triangle\n");
    scanf("%d %d %d",&s1,&s2,&s3);
    if (s1>s2 && s1>s3)
    {
        sum=s3+s2; largeS=s1;
    }
    else if (s2>s1 && s2>s3)
    {
        sum=s3+s1; largeS=s2;
    }
    else{ 
        if (s3>s1 && s3>s2)
        {
            sum=s2+s1; largeS=s3;
        }
    }
    if (sum>largeS)
        printf("Triangle is valid");
    else
        printf("Triangle is invalid");
    return 0;
}