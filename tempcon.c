#include<stdio.h>
int main()
{
    float fahr , cel;
    printf("The temperature in Fahrenheit=\n");
    scanf("%f" , &fahr);
    cel= (fahr - 32)*5/9;
    
    printf("Temp in celcius%f",cel);
    return 0;
}