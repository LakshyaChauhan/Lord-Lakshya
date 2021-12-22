// compute smallest number of notes that will combine to give Rs. amount
// differet types of notes available are Re 1, Rs 2, Rs 5, Rs 10, Rs 50 and Rs100
#include<stdio.h>
int main()
{
    int X,amount, n100, n50, n10 , n5 , n2 , n1;
        
    printf("Enter Amount:-\n");
    scanf("%d",&amount);

    n100= amount/100;
    amount= amount-n100*100;

    n50=amount/50;
    amount=amount-n50*50;

    n10=amount/10;
    amount= amount-n10*10;

    n5=amount/5;
    amount=amount-n5*5;

    n2=amount/2;
    amount=amount-n2*2;

    n1=amount;

    X=n1+n2+n5+n10+n50+n100;

    printf("Smallest Number of notes =%d",X);
    return 0;
}