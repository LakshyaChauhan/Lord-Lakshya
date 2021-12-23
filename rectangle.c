// To find whether the area of rectangle is greater than the perimeter of rectangle
#include<stdio.h>
int main()
{
    int area ,perimeter,l,b;
    printf("Enter Length and Breadth of rectangle");
    scanf("  %d %d",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    if (area>perimeter)
        printf("  area of rectangle is greater than it's perimeter.");
        else
            printf("   Area of rectangle is less than Perimeter.");
    return 0;
}