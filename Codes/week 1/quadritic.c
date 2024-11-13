#include <stdio.h>
#include <math.h>

int main()
{
    double root1, root2, disc, a, b, c, real, img;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if (disc > 0)
    {
        root1 = (-b + sqrt(disc)) / 2 * a;
        root2 = (-b - sqrt(disc)) / 2 * a;
        printf("Rooots are Real and Distinct\n");
        printf("Roots are : %.2f and %.2f ", root1, root2);
    }
    else if (disc == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Rooots are Real and equal\n");
        printf("Roots are : %.2f and %.2f ", root1, root2);
    }
    else if (disc < 0)
    {
        real = -b / (2 * a);
        img = sqrt(-disc) / (2 * a);
        printf("Rooots are complex and different\n");
         printf("Root 1 = %.2lf + %.2lfi\n", real, img);
        printf("Root 2 = %.2lf - %.2lfi\n", real, img);
    }
}