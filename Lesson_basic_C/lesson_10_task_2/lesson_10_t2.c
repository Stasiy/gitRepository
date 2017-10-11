#include <stdio.h>
#include "assayoddity.h"

#define ARRAY_LENGTH 15

int main(void)
{
    int i = 0;
    int result = 0;
    int array_length = 15;
    int array[ARRAY_LENGTH] = {0};
    printf("Enter value element array.\n");
    for(i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", (array + i));
    }
    result = fuctionAssayOddity(array, array_length);
    switch (result)
    {
        case 0:
            printf("Array is even.\n");
            break;
        case 1:
            printf("\nArray is oddity.\n");
            printf("\nThe values of array elements were doubled:\n");
            for(i = 0; i < array_length; i++)
                printf("array[%d] = %d\n", i, *(array + i));
            break;
    }
    return 0;
}

