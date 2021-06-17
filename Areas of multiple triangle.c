#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (void){

    // for storing the type of triangle
    char type;

    // required variables for calculating
    // the area of scalene triangle
    float side_1;
    float side_2;
    float side_3;
    float semi_p;
    float area;
    float area_s;

    // required variables for calculating the
    // area of equilateral and isosceles triangles
    float a;
    float b;
    float area_i;
    float area_e;

    // required variables for calculating the
    // area of right angled triangle
    float base;
    float height;
    float area_r;

    //For goto statement
   char cont;


    Run_Again:

    printf("Enter s for scalene\t\n"
           "i for isosceles\t\n"
           "e for equilateral and\t\n"
           "r for right angled triangle: ");
    scanf(" %c", &type);

    // For scalene triangle
    if (type=='s'){
        printf("Enter side 1: ");
        scanf("%f",&side_1);

        printf("Enter side 2: ");
        scanf("%f",&side_2);

        printf("Enter side 3: ");
        scanf("%f",&side_3);

        // Calculate semi perimeter.
        semi_p =(side_1+side_2+side_3)/2;


        // storing some parts of calculation as
        // "area" to make it easy to read.
        area= semi_p*(semi_p-side_1)*(semi_p-side_2)*(semi_p-side_3);
        area_s = pow(area, 0.5);
        printf("The area is: %f\n",area_s);
    }

    //For isosceles triangle
    else if (type=='i'){
        printf("Enter the dimension of equal part: ");
        scanf("%f",&a);
        area_i= (0.5)*pow(a,2);
        printf("Area is %f\n",area_i);

    }


    //For equilateral triangle
    else if (type=='e'){
        printf("Enter the dimension of equal part: ");
        scanf("%f", &a);
        area_e= (pow(3,0.5))/4*pow(a,2);
        printf("Area is %f\n",area_e);

    }

    // For right angled triangle
    else if (type=='r'){
        printf("Enter base dimension: ");
        scanf("%f", &base);
        printf("Enter hight dimension: ");
        scanf("%f", &height);
        area_r= 0.5*base*height;
        printf("Area is %f\n",area_r);

    }


    else{
        printf("Invalid Input ");

    }


    printf("Do you want to calculate more Y/N ?: ");
    scanf(" %c",&cont);

    if(cont =='Y' || cont=='y'){
        goto Run_Again;
    }
    else{
        printf("Glad to be at service!");
    }


    getch;

}
