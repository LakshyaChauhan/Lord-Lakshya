// to check whether point is inside circle on the circle or outside circle
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r;
    printf("Coordinates of points are-:");
    scanf("%d %d",&x,&y);
    printf("radius of circle");
    scanf("%d",&r);
    if(r== sqrt(pow(x,2)+pow(y,2)))
        printf("Point lies on the circle");
    else
    {
        if (r>sqrt(pow(x,2)+pow(y,2)))
            printf("Point is inside Circle");
        else
            printf("point is outside circle");
    }
    return 0;
}