#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float radius, area;

    // Calculate area of circle
    radius = 12.0;
    area = PI * radius * radius;
    printf("Area = %f", area);
    return 0;
}
