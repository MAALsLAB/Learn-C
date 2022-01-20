#include <stdio.h>
#include <stdlib.h>

// Function prototype
long int factorial(int);

int main()
{
    int number1 = 0;
    int number2 = 1;
    int number3 = 2;
    int number4 = 3;

    printf("Factorial Value of %d is %d\n", number1, factorial(number1));
    printf("Factorial Value of %d is %d\n", number2, factorial(number2));
    printf("Factorial Value of %d is %d\n", number3, factorial(number3));
    printf("Factorial Value of %d is %d\n", number4, factorial(number4));

    return 0;
}


// Function Declaration
long int factorial(int number)
{
    if (number <= 1) {
        return 1;
    } else {
        return (number * factorial(number - 1));
    }
}
