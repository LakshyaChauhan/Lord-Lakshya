//Calculate gross salary of Ramesh
#include<stdio.h>
int main()
{
    float bp, da, ra, gs;
    printf("Basic Pay of Ramesh=\t");
    scanf("%f",&bp);
    
    da=0.4*bp;
    ra=0.2*bp;

    gs=bp+da+ra;

    printf("\n\n\nGross Salary of Rakesh=\t%f",gs);

    return 0;
}