// to check wheter the points are in straight line
// ONE WAY  

#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float D1,D2;
    printf("Points on cartesian plane\n");
    scanf("%d %d\n%d %d\n%d %d",&x1,&x2,&x3,&y1,&y2,&y3);
    D1= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    D2= sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    if (D1=D2)
        printf("Points are on Straight line");
    else    
        printf("Not in straight line ");
    return 0;
}

    /*
    #include<stdio.h>
    #include<math.h>
    int main()
    { 
        int x1,x2,x3,y1,y2,y3;
        float D1,D2,D3;
        printf("Points on cartesian plane\n");
        scanf("%d %d\n%d %d\n%d %d",&x1,&x2,&x3,&y1,&y2,&y3);
        D1= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        D2= sqrt(pow((x3-x2),2)+pow((y3-y2),2));
        D3= sqrt(pow((x3-x1),2)+pow((y3-y1),2));
        if (D3=D1+D2)
            printf("Points are on Straight line");
        else    
            printf("Not in straight line ");
        return 0;
    }
  
*/

   