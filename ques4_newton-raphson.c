//Implementation of newton raphson method

#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (x * x * x) - 5 * x + 1;
}
float fd(float x)
{
    return 3 * x * x - 5;
}
int main()
{
    float x0, err;
    printf("Enter the value of x0 : \n");
    scanf("%f", &x0);
    printf("Enter the allowed error : \n");
    scanf("%f", &err);
    int itr = 0;
    while (1)
    {
        itr++;
        float x1 = x0 - (f(x0) / fd(x0));
        float ans = f(x1);
        printf("%d Iteration, value of x = %f, value of (%f) is %f \n", itr, x1, x1, ans);
        if (fabs(ans) < err)
        {
            break;
        }
        else
        {
            x0 = x1;
        }
    }
    return 0;
}

//input : 
// Enter the value of x0 :
// 0
// Enter the allowed error :
// 0.0001
//output :
// 1 Iteration, value of x = 0.200000, value of (0.200000) is -0.744000
// 2 Iteration, value of x = 0.333333, value of (0.333333) is -0.296296
// 3 Iteration, value of x = 0.400000, value of (0.400000) is -0.064000
// 4 Iteration, value of x = 0.416667, value of (0.416667) is -0.008230
// 5 Iteration, value of x = 0.418182, value of (0.418182) is -0.000106
// 6 Iteration, value of x = 0.418182, value of (0.418182) is -0.000000


