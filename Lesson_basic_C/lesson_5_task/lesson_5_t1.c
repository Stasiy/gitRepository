#include <stdio.h>

int main(void)
{
    int nameValue;
    char exit;
    float R1, R2, Ui, U0;
    do
    {
        printf("Enter the name of the variable whose value you want to count:\n");
        printf("U0 - 1, Ui - 2, R1 - 3, R2 - 4\n");
        printf("Name value: ");
        scanf("%d", &nameValue);
        switch(nameValue)
        {
            case 1:
                printf("Enter value variables:\n");
                printf("Ui =");
                scanf("%f", &Ui);
                printf("R1 =");
                scanf("%f", &R1);
                printf("R2 =");
                scanf("%f", &R2);
                U0 = Ui * (R1/(R2 + R1));
                printf("Result: U0 = %0.3f\n", U0);
            break;
            case 2:
                printf("Enter value variables:\n");
                printf("U0 =");
                scanf("%f", &U0);
                printf("R1 =");
                scanf("%f", &R1);
                printf("R2 =");
                scanf("%f", &R2);
                Ui = U0 / (R1 / (R2 + R1));
                printf("Result: Ui = %0.3f\n", Ui);
            break;
            case 3:
                printf("Enter value variables:\n");
                printf("U0 =");
                scanf("%f", &U0);
                printf("R2 =");
                scanf("%f", &R2);
                printf("Ui =");
                scanf("%f", &Ui);
                R1 = (U0 * R2) / (Ui - U0);
                printf("Result: R1 = %0.3f\n", R1);
            break;
            case 4:
                printf("Enter value variables:\n");
                printf("U0 =");
                scanf("%f", &U0);
                printf("R1 =");
                scanf("%f", &R1);
                printf("Ui =");
                scanf("%f", &Ui);
                R2 = (R1/U0) * (Ui - U0);
                printf("Result: R2 = %0.3f\n", R2);
            break;
        }
        R1 = 0;
        R2 = 0;
        Ui = 0;
        U0 = 0;
        nameValue = 0;
        do
        {
            printf("Do you want to end the program? (y/n)");
            scanf("%c", &exit);
        }while(exit == "y" || exit == "n");
    }while(exit != "y");
    return 0;
}

