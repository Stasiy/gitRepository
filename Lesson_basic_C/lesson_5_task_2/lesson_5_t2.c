#include <stdio.h>

int main(void)
{
    int number;
    int numberMIN = 0;
    int numberMAX = 100;
    printf("Enter any integer number.\n");
    printf("Number: ");
    scanf("%d", &number);
    printf("Your number %d %sinclude in range from %d to %d",
           number, (number >= numberMIN && number <= numberMAX) ? "" : "does not ", numberMIN, numberMAX);
    return 0;
}

