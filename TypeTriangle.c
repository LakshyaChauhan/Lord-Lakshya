// Check whether the triangle is isosceles , equilateral  , scalene or right angled triangle.
#include<stdio.h>
#include<math.h>

int main()
{
    int s1,s2,s3;
    printf("Sides of triangle\n");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s1==s3)
        printf("Equilateral Triangle\n");
    else if ((s1==s2 && s1!=s3) || (s1==s3 && s1!=s2))
        printf("isosceles triangle\n");
    else{
        if (s1!=s2 && s1!=s3)
            printf("Scalene Triangle\n");
    }
    if ((s1== sqrt(pow(s2,2)+pow(s3,2))) || s2== sqrt(pow(s1,2)+pow(s3,2)) || s3== sqrt(pow(s2,2)+pow(s1,2)))
        printf("Right angled triangle");
    return 0;
}
