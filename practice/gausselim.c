#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the value of the n: ");
    scanf("%d",&n);
    float a[n][n+1];
    printf("Enter the value of the matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    //Convert to upper triangular matrix
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }
    //back substrituion
    float value[n];
    float sum = 0;
    value[n-1] = a[n-1][n] / a[n-1][n-1];
    for (int i = n-2; i >= 0 ; i--)
    {
        sum = 0;
        for (int j = i+1; j<n; j++){
                sum = sum + a[i][j]*value[j];
        }
        value[i] = (a[i][n]-sum)/a[i][i];
        
    }
    printf("The value of eq is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%f ",value[i]);
    }

}