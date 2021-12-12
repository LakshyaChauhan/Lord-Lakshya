#include <stdio.h>
int main()
{
    int x;
    printf("Enter number:          ");
    scanf("%d",&x);
    if (x%2==0)
        printf("Even\n");
    else
        printf("odd");
    return 20;       
}