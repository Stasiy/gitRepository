#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void decimalTobinary(int num, char * result_bin)
{
    int bin_digit = 0;
    char result[64];
    int temp_num;
    temp_num = num;
    while(temp_num != 0)
    {
        temp_num = temp_num >> 1;
        bin_digit++;
    }
    result[bin_digit] = '\0';
    while(num > 0)
    {
        bin_digit--;
        result[bin_digit] = (num % 2) ? '1' : '0';
        num /= 2;
    }
    strcat(result_bin, result);
}

int main(void)
{
    char binary[64] = "b'";
    int number;
    puts("This program convert decimal to binary.");
    printf("Enter number: ");
    scanf("%d", &number);
    decimalTobinary(number, binary);
    printf("Your number in binary form is %s\n", binary);
    return 0;
}

