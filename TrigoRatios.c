// print all trignometric ratios
#include<math.h>
#include<stdio.h>

int main()
{
    float a, b ,c , d , e , f , g , h , i  ,angle;
    
    printf("Enter angle in Degree:-\t");
    scanf("%f",&angle);
    
    angle=angle*3.14/180;
    
    a= sin(angle);
    b= cos(angle);
    c= tan(angle);
    d= 1/a;
    e= 1/b;
    f= 1/c;
    g= asin(angle);
    h= acos(angle);
    i= atan(angle);

    printf( "sin x=  %f\tcos x=  %f\ttan=  %f\ncosec x=  %f\tsec x=  %f\tcot x=  %f\nasin x=  %f\tacos x=  %f\tatanx=  %f",a,b,c,d,e,f,g,h,i);

    return 0;
}