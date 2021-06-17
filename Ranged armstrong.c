#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (void){

    int start_range, end_range;


    printf("Enter the start of range: ");
    scanf("%d",&start_range);

    printf("Enter the end of range: ");
    scanf("%d",&end_range);

    printf("The armstrong numbers within this range is/are:\n");

    int s,r,c;

    int t;
    int i;

    for(i=start_range; i<=end_range; i++){

        t=i;
        s=0;

        while(t!=0){
        r=t%10;
        c=pow(r,3);
        s=s+c;
        t=t/10;
        }

        if(s==i){
            printf("%d\n",i);
        }

    }

    return 0;

}

