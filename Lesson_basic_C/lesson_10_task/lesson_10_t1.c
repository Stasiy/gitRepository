#include <stdio.h>
#include "calculate.h"

int main(void)
{
    float equation_X;
    float equation_Y;
    float Coefficient_a, Coefficient_b, Coefficient_c;
    int result = 0;
    printf("Enter the coefficients of the equation which has the form a * x ^ 2 + b * x + c = 0:\n");
    printf("Coefficient a: ");
    scanf("%f", &Coefficient_a);
    printf("Coefficient b: ");
    scanf("%f", &Coefficient_b);
    printf("Coefficient c: ");
    scanf("%f", &Coefficient_c);
    result = calculateSquareEquality(Coefficient_a, Coefficient_b, Coefficient_c, &equation_X, &equation_Y);
    switch(result)
    {
        case 1:
            printf("The equation has two roots x1 = %.3f, x2 = %.3f\n", equation_X,equation_Y );
            break;
        case 0:
            printf("The equation has unique root x1 = %.3f\n", equation_X);
            break;
        case -1:
            printf("The equation has no roots\n");
            break;
        default:
            printf("Value coefficients are not know!\n");

    }
    return 0;
}

