// Secant Method

#include<stdio.h>
#include<math.h>

float f(float x)
{
    return (x*x*x - 5*x + 1);
}

int main()
{
    float x0, x1, x2, f0, f1, f2, e;
    int step = 1;
    printf("\nEnter first guess: ");
    scanf("%f", &x0);
    printf("\nEnter second guess: ");
    scanf("%f", &x1);
    printf("\nEnter tolerable error: ");
    scanf("%f", &e);
    // printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
    do
    {
        f0 = f(x0);
        f1 = f(x1);
        if(f0 == f1)
        {
            printf("Mathematical Error.");
            break;
        }
        x2 = x1 - (x1 - x0) * f1/(f1-f0);
        f2 = f(x2);
        // printf("%d\t\t%f\t%f\t%f\t%f\n",step, x0, x1, x2, f2);
        printf("Step %d: x0 = %f, x1 = %f, x2 = %f, f(x2) = %f\n", step, x0, x1, x2, f2);
        x0 = x1;
        f0 = f1;
        x1 = x2;
        f1 = f2;
        step = step + 1;
    }while(fabs(f2)>e);
    printf("\nRoot is: %f", x2);
    return 0;
}
