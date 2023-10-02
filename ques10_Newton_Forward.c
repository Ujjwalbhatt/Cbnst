//Newton Forward Interpolation
// 1. Enter the no. of observation
// 2. Enter the value of x
// 3. Enter the value of y
// 4. Newton forward Difference table
// 5. Print Difference table
// 6. Apply Newton forward Interpolation Formula


#include<stdio.h>
#include<math.h>

int main(){

    int n,i,j;
    printf("Enter the no. of observation\n");
    scanf("%d",&n);

    float x[n],y[n][n],x0,h,p,u,sum=0;
    printf("Enter the value of x\n");

    for(i=0;i<n;i++){
        scanf("%f",&x[i]);
    }


    printf("Enter the value of y\n");

    for(i=0;i<n;i++){
        scanf("%f",&y[i][0]);
    }

    printf("Enter the value of x0\n");

    scanf("%f",&x0);

    h=x[1]-x[0];

    p=(x0-x[0])/h;

    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            y[j][i]=y[j+1][i-1]-y[j][i-1];
        }
    }

    printf("Newton forward Difference table\n");

    for(i=0;i<n;i++){
        printf("%0.2f\t",x[i]);
        for(j=0;j<n-i;j++){
            printf("%0.2f\t",y[i][j]);
        }
        printf("\n");
    }
    u=p;
    sum=y[0][0];
    for(i=1;i<n;i++){
        sum=sum+(u*y[0][i])/tgamma(i+1);
        u=u*(p-i);
    }
    printf("Apply Newton forward Interpolation Formula\n");
    printf("When x=%0.2f, y=%0.2f\n",x0,sum);
    return 0;
}