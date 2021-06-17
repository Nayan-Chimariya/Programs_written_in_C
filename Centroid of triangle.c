// calculate the centroid of triangle!

#include <stdio.h>
#include <conio.h>


int main (void){

    int x1,y1,z1;
    int x2,y2,z2;
    int x3,y3,z3;
    float x,y,z;

    char chk;

    top:


    printf("Enter the x y and z coordinates of vertex A: ");
    scanf("%d %d %d",&x1,&y1,&z1);

    printf("Enter the x y and z coordinates of vertex B: ");
    scanf("%d %d %d",&x2,&y2,&z2);

    printf("Enter the x y and z coordinates of vertex C: ");
    scanf("%d %d %d",&x3,&y3,&z3);

    x=((float)x1+(float)x2+(float)x3)/(float)3;
    y=((float)y1+(float)y2+(float)y3)/(float)3;
    z=((float)z1+(float)z2+(float)z3)/(float)3;

    printf("The coordinate of centroid of triangle is: (%.2f, %.2f, %.2f)\n\n",x,y,z);

    printf("Do you want to continue? [y/n]");
    scanf(" %c",&chk);

    if(chk =='y' | chk =='Y'){
        goto top;
    }

    else printf("Glad to be at service!!");



    return 0;
}
