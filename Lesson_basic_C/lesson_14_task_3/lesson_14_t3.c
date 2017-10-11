#include <stdio.h>

int* memoryallocation(int size_arr)
{
    int * arr = calloc(sizeof(int), size_arr);
    return arr;
}

int main(void)
{
    int size_array = 7;
    int* array;
    int i;
    array = memoryallocation(size_array);
    for(i = 0; i < size_array; i++)
        printf("%d ", *(array + i));
    puts("");
    for(i = 0; i < size_array; i++)
        *(array + i) = (i + 1) * 7;
    puts("");
    for(i = 0; i < size_array; i++)
        printf("%d ", *(array + i));
    puts("");
    return 0;
}

