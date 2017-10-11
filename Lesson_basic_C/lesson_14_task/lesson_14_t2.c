#include <stdio.h>

struct rectangle
{
    float length;
    float width;
    float perimeter;
    float area;
};
typedef struct rectangle Rectangle;

void calculatesPerimetrAndArea(Rectangle * rect)
{
    rect->perimeter = 2 * (rect->length + rect->width);
    rect->area = rect->length * rect->width;
}

int main(void)
{
    Rectangle rectan;
    puts("This program calculates perimetr and area rectangle.");
    printf("Enter length: ");
    scanf("%f", &rectan.length);
    printf("Enter width: ");
    scanf("%f", &rectan.width);
    calculatesPerimetrAndArea(&rectan);
    printf("The area of your rectangle is equal to %.2f and the perimeter is equal to %.2f\n", rectan.area, rectan.perimeter);
    return 0;
}

