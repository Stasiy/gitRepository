#include <stdio.h>

int main(void)
{
    float numbers;
    float number_SUMM = 0;
    int amount_numbers;
    float average = 0;
    int i = 0;
    printf("enter the amount of numbers.\n");
    scanf("%d", &amount_numbers);
    do
    {
        printf("Number_%d = ", i);
        scanf("%f", &numbers);
        number_SUMM += numbers;
        i++;
    }while(i < amount_numbers);
    average = number_SUMM / amount_numbers;
    printf("The arithmetic mean of your numbers is %.2f", average);
    return 0;
}

