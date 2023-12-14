#include <stdio.h>
#include <math.h>
float f(float x)
{
    return 1 / (1 + x * x);
}
int main()
{
    int n;
    float a, b, sum = 0, h;
    int choice;
    int position_of_term = 1;
    printf("Enter the value of steps: ");
    scanf("%d", &n);
    printf("Enter the value of a and b: ");
    scanf("%f%f", &a, &b);
    h = (b - a) / n;
    while (1)
    {
        printf("\nEnter 1 for trapezoidal, 2 for 1/3 simpson,3 for 3/8 simpson and 4 for exit: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            sum=f(a) + f(b);

            for (float i = a + h; i < b; i = i + h)
            {
                sum = sum + 2 * f(i);
            }
            sum = (h * sum) / 2;
            printf("\nValue of the integral  = %f", sum);
        }
        else if (choice == 2)
        {
            sum=f(a) + f(b);
            position_of_term = 1;
            for (float i = a + h; i < b; i = i + h)
            {
                if (position_of_term % 2 == 0)
                    sum = sum + 2 * f(i);
                else
                    sum = sum + 4 * f(i);
                position_of_term++;
            }
            sum = (h * sum) / 3;
            printf("\nValue of integral  = %f", sum);
        }
        else if (choice == 3)
        {
            position_of_term = 1;
            sum=f(a) + f(b);
            for (float i = a + h; i < b; i = i + h)
            {
                if (position_of_term % 3 == 0)
                {
                    sum = sum + 2 * f(i);
                }
                else
                {
                    sum = sum + 3 * f(i);
                }
                position_of_term++;
            }
            sum = (3 * h) /8 *sum;
            printf("\nvalue of integral = %f", sum);
        }
        else
        {
            break;
        }
    }
}