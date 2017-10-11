#include <stdio.h>
#define NUMBERS 10
#define ARRAY_LENGH 20
#define NUMBER_TWENTY 20
int main(void)
{
    srand(time(NULL));
    int frequensy[ARRAY_LENGH] = {0};
    int a, i;
    for(i = 0; i < NUMBERS; i++)
    {
        a = rand() % NUMBER_TWENTY;
        printf("Number a - %d\n", a);
        frequensy[a]++;
    }
    for(i = 0; i < ARRAY_LENGH; i++)
    {
        printf("Number %d generated %d (%2.2f%%)\n", i, frequensy[i], ((float)frequensy[i]/NUMBERS * 100));

    }
    return 0;
}

