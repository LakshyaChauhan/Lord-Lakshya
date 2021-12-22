// Latitude(L1,L2) Longitude (G1,G2) in degree
// To find Distance between two places on earth in nautical miles
// FORMULA D= 3963 cos inverse( sin L1 sin L2 +cos L1 cos L2* cos (G2-G1))
// convert angle to radians
#include<stdio.h>
#include<math.h>

int main()
{
    float L1,L2,G1,G2,D;
    printf("Entre the Latitude anD longitutde:-\n");
    scanf("%f %f %f %f",&L1,&G1,&L2,&G2);
    
    printf("Place 1   ( %f , %f )\n",L1,G1);
    printf("Place 2   ( %f , %f)\n",L2,G2);

    D=  3963* acos( sin (L1*3.14/180) * sin (L2*3.14/180) +cos (L1*3.14/180) *cos (L2*3.14/180)* cos ((G2-G1)*3.14/180));

    printf("Distance Between Two Places=\t %4f nautical miles",D);

    return 0;
}