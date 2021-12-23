// calculate profit and loss in business
#include<stdio.h>

int main()
{
    float cp,sp,P,L;
    printf("Cost Price and Slling Price:-\n");
    scanf("%f %f",&cp,&sp);
    if (cp!=sp && cp>sp)
    {
        L=cp-sp;
        printf("Loss in the Business:-%f",L);    
    }
    else{
        if (cp!=sp && cp<sp)
        {
            P=sp-cp;
            printf("Profit in Business:-%f",P);
        }
        else
            printf("No Profit and No Loss");
    }
    return 0;
}