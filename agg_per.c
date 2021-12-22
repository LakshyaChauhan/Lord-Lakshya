#include<stdio.h>
int main()
{
    // maximum marks is out of 100 per subject

    int m1 , m2, m3 , m4, m5, agg;
    float per;
    printf("Marks in five subjects\n");
    scanf("%d %d %d %d %d", &m1, &m2 , &m3 ,&m4 , &m5);
    agg= m1 + m2 + m3 + m4+ m5;
    per= agg/5;

    printf("%d Aggerate Marks\n",agg);
    printf("Percentage= %f",per);
    return 0;
}