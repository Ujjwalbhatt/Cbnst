#include <stdio.h> 
#include<math.h>

void printMatrix(int n,float a[n][n+1]) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<=n; j++) {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int n;
    printf("Enter the size of the matrix");
    scanf("%d", &n);
   printf("Enter the coefficients of the equations\n");
    float a[n][n+1];
    for (int i=0; i<n; i++) {
        for (int j=0; j<=n; j++) {
            scanf("%f", &a[i][j]);
        }
    }
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++)
        {
           if(i!=j){
                float ratio  = a[j][i] / a[i][i];
                for (int k = 0; k <= n; k++)
                {
                    a[j][k] = a[j][k] - (ratio*a[i][k]);
                }
                
           } 
        }

    }
        printMatrix(n,a);
    for(int i = 0;i<n;i++){
            printf("%f\n",a[i][n]/a[i][i]);
    }
    return 0;
}
