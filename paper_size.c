// A0 has dimensions 1189 X 841 mm 
// A1 has dimensions  841 X 594 mm
// The dimension is defined as  A(n) X A(n-1) mm

#include<stdio.h>
int main()
{
    int A1h , A1w , A2h , A2w , A3h , A3w , A4h , A4w , A5h , A5w , A6h , A6w , A7h , A7w , A8h , A8w ;
    int A0h=1189; int A0w=841;
    printf("A0h=%d\tA0w=%d\n",A0h,A0w);
    
    A1h= A0w; A1w= A1h/2;
    printf("A1h=%d\t\tA1w=%d\n",A1h,A1w);

    A2h=A1w; A2w=A1h/2;
    printf("A2h=%d\t\tA3w=%d\n",A2h,A2w);
    
    A3h=A2w; A3w=A1w/2;
    printf("A4h=%dt\tA4w=%d\n",A3h,A3w);

    A4h=A3w; A4w=A3h/2;
    printf("A4h=%d\t\tA4w=%d\n",A4h,A4w);
    
    A5h=A4w;  A5w=A4h/2;
    printf("A5h=%d\t\tA5w=%d\n",A5h,A5w);

    A6h=A5w; A6w=A5h/2;
    printf("A6h=%d\t\tA6w=%d\n",A6h,A6w);

    A7h= A6w; A7w=A6h/2;
    printf("A7h=%d\t\tA7w=%d\n",A7h,A7w);

    A8h=A7w; A8w=A7h/2;
    printf("A8h=%d\t\tA8w=%d\n",A8h,A8w);

    return 0;
}