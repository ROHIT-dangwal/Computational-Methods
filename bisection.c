#include <stdio.h>
#include <math.h>
#define e 0.001
double f(double x)
{
    return x * x * x - 4 * x - 9;
}
int main()
{
    double x0, x1, x2;
up:

    printf("Enter the value of x0: ");
    scanf("%lf", &x0);
    printf("Enter the value of x1: ");
    scanf("%lf", &x1);
    do
    {
        if (f(x0) * f(x1) < 0)
        {
            x2 = (x0 + x1) / 2;
            printf("%lf\n", x2);
            if (f(x2) * f(x0) < 0)
            {
                x1 = x2;
            }
            else
            {
                x0 = x2;
            }
        }
        else
        {
            goto up;
        }

    } while (fabs(x0 - x1) > e);

    return 0;
}