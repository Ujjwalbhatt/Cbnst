#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    float a[n][n+1];
    printf("Enter the vlaue of matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            scanf("%f",&a[i][j]);
        }   
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
                if (i!=j)
                {
                    float ratio = a[j][i]/a[i][i];
                    for (int k = 0; k <= n; k++)
                    {
                        a[j][k] = a[j][k] -(ratio*a[i][k]);
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
    float value[n];
    for (int i = 0; i < n; i++)
    {
         printf("%f ",a[i][n]/a[i][i]);

    }
    

    
}