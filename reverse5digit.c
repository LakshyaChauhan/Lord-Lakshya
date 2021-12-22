// let 5 digit number be 34567 
// divide it by 10 and remainder comes out is 7
// by dividing number becomes 3456
// again divide it by 10 and remainder comes out is 6
// repeat until you divide it number at ten thousand th place
// store all the remainders 


#include<stdio.h>

int main()
{
    int num, rev, n1, n2, n3, n4, n5;
    
    printf("\nEnter Number-:\n");
    scanf("%d",&num);

    n1=num%10;
    num=num/10;

    n2=num%10;
    num=num/10;

    n3= num%10;
    num=num/10;
    
    n4= num%10;
    num= num/10;

    n5= num%10;

    rev= 10000*n1 + 1000 * n2 + 100 * n3 + 10* n4 + n5;
    printf("\nReverse Number-:\n%d",rev);
    
    return 0;
}