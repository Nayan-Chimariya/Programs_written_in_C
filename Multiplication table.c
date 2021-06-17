#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_X;
    int i;

    top:

    printf("Enter the number that you would like\t\n"
           "to see the multiplication table of: ");
    scanf("%i",&number_X);


    printf("The multiplication table of  %d is shown below\n", number_X);


    for (i = 1; i < 11; ++i)
  {
    int multiplied_value = i*number_X;
    printf("%d * %d = %d\n", number_X, i , multiplied_value );
  }

  char chk;

  printf("Do you want to see the next 10 Y/N?: ");
  scanf(" %c",&chk);

    if (chk == 'y' || chk == 'Y'){
        for (i = 11; i < 21; ++i){
        int multiplied_value = i*number_X;
        printf("%d * %d = %d\n", number_X, i , multiplied_value );
        }

    }

    else{
        goto bottom;
    }

    printf("Do you want to see the next 10 Y/N?: ");
    scanf(" %c",&chk);

    if (chk == 'y' || chk == 'Y'){
        for (i = 21; i < 31; ++i){
        int multiplied_value = i*number_X;
        printf("%d * %d = %d\n", number_X, i , multiplied_value );
        }

    }

    else{
        goto bottom;
    }

    printf("Do you want to see the next 10 Y/N?: ");
    scanf(" %c",&chk);

    if (chk == 'y' || chk == 'Y'){
        for (i = 31; i < 41; ++i){
        int multiplied_value = i*number_X;
        printf("%d * %d = %d\n", number_X, i , multiplied_value );
        }

    }

    else{
        goto bottom;
    }

    printf("Do you want to see the next 10 Y/N?: ");
    scanf(" %c",&chk);

    if (chk == 'y' || chk == 'Y'){
        for (i = 41; i < 51; ++i){
        int multiplied_value = i*number_X;
        printf("%d * %d = %d\n", number_X, i , multiplied_value );
        }

    }

    else{
        goto bottom;
    }



    char Continue;

    bottom:

    printf("Do you want to see for another number Y/N?: ");
    scanf(" %c",&Continue);

    if (Continue == 'y' || Continue == 'Y'){
        goto top;
    }

    else{
        printf("Glad to be at sevice");
    }

    return 0;
}
