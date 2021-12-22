// Calculating wind chill factor which is felt air temperature on exposed skin due to wind
// Wind chill factor is always lower than air temerature
#include<stdio.h>
#include<math.h>
 
 int main()
 {
    float v , t , wcf;
    printf("Temperature in Celcius:-\n");
    scanf("%f",&t);

    printf("Velocity of wind:-\n");
    scanf("%f",&v);

    wcf= 35.74  +0.6215 *t + (0.4275 *t - 35.75) * pow(v,0.16);

    printf("Wind chill factor=  %f",wcf);

    return 0; 
 }