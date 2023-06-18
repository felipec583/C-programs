#include <stdio.h>

int main(void)
{

    // Triangles based on length size

    float a, b, c;
    printf("Enter three values: ");
    scanf("%f%f%f", &a, &b, &c);
    // Condition to handle negative values
    if (a > 0 && b > 0 && c > 0)
    {

        if (b == a && c == a)
        {
            printf("\nEquilateral triangle (three equal sides)");
        }
        else if (a == b || a == c || b == c)
        {
            printf("\nIsoceles triangle (two equal sides)");
        }
        else
        {
            printf("\nScalene triangle (unequal sides)");
        }
    }
    else
    {
        printf("Values equal or less than 0 are not valid");
    }

    return 0;
}