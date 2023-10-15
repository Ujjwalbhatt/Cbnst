// Gauss Elimination Method
// Enter the order of the martix: 3
// Enter the elements of augmented matrix row-wise:
// 1 1 1 6
// 2 3 5 15
// 4 6 8 28
// The solution is
// upper triangular matrix
//

#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    printf("Enter the number of variables");
    scanf("%d", &n);
    float a[n][n + 1];
    float x[n];
    float sum = 0;
    printf("Enter the coefficients of the equations");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
                if(j>i){
                    float ratio = a[j][i]/a[i][i];
                    for (int k = 0; k <= n; k++)
                    {
                        a[j][k] = a[j][k] - (ratio*a[i][k]);
                    }
                    
                }
        }
        
    }

//printing the upper triangular matrix
    printf("upper triangular matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }
    
    x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        sum = 0;
        for (int j = i + 1; j < n; j++)
        {
            sum = sum + a[i][j] * x[j];
        }
        x[i] = (a[i][n] - sum) / a[i][i];
    }
    printf("The solution is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%f\n", x[i]);
    }
    return 0;
}

