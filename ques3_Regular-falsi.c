#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (x * x * x) - 5 * x + 1;
}
int main()
{
    float x0, x1, err;
    int flag = 0;
    do
    {
        printf("Enter the values of x1 and x2 : \n");
        scanf("%f%f", &x0, &x1);

        if ((f(x0) * f(x1)) < 0)
        {
            flag = 1;
            printf("Two roots lie b/w %f and %f \n", x0, x1);
        }
        else
        {
            printf("Invalid Input. Try Again!!! \n");
        }
    } while (flag == 0);
    printf("Enter the allowed error : \n");
    scanf("%f", &err);

    int itr = 0;
    while (1)
    {
        itr++;
        // float x2 = (x0 + x1) / 2;
        float x2 = x0-((x1-x0)/(f(x1)-f(x0)))*f(x0);
        float ans = f(x2);
        printf("%d Iteration, value of x = %f, value of (%f) is %f \n", itr, x2, x2, ans);
        if (fabs(ans) < err)
        {
            break;
        }
        else if (f(x0) * f(x2) < 0)
        {
            x1 = x2;
        }
        else
        {
            x0 = x2;
        }
    }
    return 0;
}

 // Input: 
    // Enter the values of x1 and x2 :
    // 0 1
    // Two roots lie b/w 0.000000 and 1.000000
    // Enter the allowed error :
    // 0.0001
// Output:
    // 1 Iteration, value of x = 0.500000, value of (0.500000) is -1.375000
    // 2 Iteration, value of x = 0.750000, value of (0.750000) is -0.234375
    // 3 Iteration, value of x = 0.875000, value of (0.875000) is 0.535156
    // 4 Iteration, value of x = 0.812500, value of (0.812500) is 0.144531
    // 5 Iteration, value of x = 0.781250, value of (0.781250) is -0.045898
    // 6 Iteration, value of x = 0.796875, value of (0.796875) is 0.049561
    // 7 Iteration, value of x = 0.789062, value of (0.789062) is 0.001953
    // 8 Iteration, value of x = 0.785156, value of (0.785156) is -0.021240
    // 9 Iteration, value of x = 0.787109, value of (0.787109) is -0.009155
    // 10 Iteration, value of x = 0.788086, value of (0.788086) is -0.003113
    // 11 Iteration, value of x = 0.788574, value of (0.788574) is -0.000580
    // 12 Iteration, value of x = 0.788818, value of (0.788818) is 0.000687
    // 13 Iteration, value of x = 0.788696, value of (0.788696) is 0.000053
    // 14 Iteration, value of x = 0.788635, value of (0.788635) is -0.000264
    // 15 Iteration, value of x = 0.788666, value of (0.788666) is -0.000106
    // 16 Iteration, value of x = 0.788681, value of





    