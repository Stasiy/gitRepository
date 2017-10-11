#include <stdio.h>
#include <math.h>
#include <string.h>
struct a_Line
{
    float x;
    float y;
};
typedef struct a_Line ALine;

struct b_Line
{
    float x;
    float y;
};
typedef struct b_Line BLine;

struct Sline
{
    float line;
    ALine a_line;
    BLine b_line;
};
typedef struct Sline Line;

Line lineReckoning(float xA, float yA, float xB, float yB)
{
    Line lineab;
    lineab.a_line.x = xA;
    lineab.a_line.y = yA;
    lineab.b_line.x = xB;
    lineab.b_line.y = yB;
    lineab.line = sqrt(powf((xB - xA), 2.0) + powf((yB - yA), 2.0));
    return lineab;
}

int main(void)
{
    float a_x;
    float a_y;
    float b_x;
    float b_y;
    Line LineAB;
    puts("This program calculates the length of the line by two points");
    puts("Enter coordinates point a.");
    printf("x1 = ");
    scanf("%f", &a_x);
    printf("y1 = ");
    scanf("%f", &a_y);
    puts("Enter coordinates point b.");
    printf("x2 = ");
    scanf("%f", &b_x);
    printf("y2 = ");
    scanf("%f", &b_y);
    LineAB = lineReckoning(a_x, a_y, b_x, b_y);
    printf("Line this direct is %.2f\n", LineAB.line);
    return 0;
}

