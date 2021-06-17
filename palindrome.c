#include <stdio.h>
#include <conio.h>

int main (void){

    // using long long int so that
    // I don't get numeric overflow error.
    long long int n;
    long long int t;


    // top is used as label for goto statement.

    // positioning of "top" is very crucial
    // it should be placed before initializing the values
    // if it's used after those values then previous values
    // will be initialized thus the result will not be as expected.
    top:

    printf("Enter the number you want to check: ");
    scanf("%lld",&n);

    t=n;

    // here r must be initialized as 0
    // i don't know why but it does not work otherwise.
    long long int r=0;

    while(t!=0){

    // the logic is to get the reverse of the input and compare it
    // to the original value. here "r" provides the reverse value.

        r=r*10;
        r=r+ t%10;
        t=t/10;
    }

    if(r==n)
        printf("Palindrome!\n");

    else
        printf("Not palindrome!\n");


    // "chk" is a variable that will store the choice of the user.
    char chk;

    printf("Do you want to check more Y/N ?: ");
    scanf(" %c",&chk);

    if(chk=='y' || chk=='Y')

        goto top;


    else
        printf("Glad to be at service!\n");




    return 0;


}
