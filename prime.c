#include<stdio.h>
int main(){   
    int i, n , c=0;
    printf("Enter the Positive Number:\n");
    scanf("%d", &n);
    for (i=1; i<=n; ++i) 
    // finding how many times number "n" is divisible by "i"
         if (n%i==0)
            c+=1;
    if (n==1 )
            printf("\n\n\n One is neither Prime Nor Composite");    
    else
        if (c==2) 
    // prime number is only divisible by itself and 1 , considering that i=2 it is divisible only
            printf("Prime Number");
        else
            printf("Not Prime Number");
    return 0;
}