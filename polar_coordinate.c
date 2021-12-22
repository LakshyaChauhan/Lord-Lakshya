//  converting Cartesian co-ordinates (x,y) into polar co-ordinates (r,s )
//  r= sqrt(x sq+ y sq)
#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,r,s;

    printf("Cartesian Co-ordinates (x,y)\n");
    scanf("%f %f",&x,&y);
    printf("Cartesian Co-ordinates (%f,%f)\n\n",x,y);
    
    r=sqrt(x*x+y*y);
    s= atan(y/x);

    printf("Polar Co-ordinates  ( %f , %f)",r,s);

    return 0;
}

