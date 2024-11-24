#include <stdio.h>
#include <math.h>
#define e 0.001
double f(double x)
{
    return x * x * x - 4 * x - 9;
}
double df(double x)
{
    return 3 * x * x - 4;
}
int main()
{
    double x0, x1;
    printf("Enter the initial guess for the root: ");
    scanf("%lf", &x0);
    int maxitr, i = 0;
    printf("Enter the maximum number of iterations: ");
    scanf("%d", &maxitr);
    do
    {
        x1 = x0 - (f(x0) / df(x0));
        i++;
        printf("Value of root at iteration %d is: %lf\n", i, x1);
        x0 = x1;

        if (maxitr <= i)
        {
            return 1;
        }
    } while (fabs(f(x1)) > e);

    return 0;
}