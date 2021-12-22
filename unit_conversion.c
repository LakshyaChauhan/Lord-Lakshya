#include <stdio.h>

// program to calculate distances between cities iin cm and m

int main()
{	
	float D_km, D_m ,D_cm;
	printf("Distance between cities in KM\n");
	scanf("%f",&D_km);

	D_m= D_km*1000;
        D_cm= D_km*100000;

	printf("Distance in meter  %f\n", D_m);


	printf("Distance in centimeter %f\n",            D_cm);
	return 0;

			
}