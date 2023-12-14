//C Program to Fit a 2nd degree Parabola (y=ax^2 + bx +c ) on given points

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void gaussjordan(float a[3][4],int n)
{
    int i,j,x,y,k;
    float value[3];

    float ratio;
    for( i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
         if(i!=j)
         {
             ratio=a[j][i]/a[i][i];
             for(k=0;k<n+1;k++)
                a[j][k]=a[j][k] -( ratio * a[i][k]); 
         } 
      }
     }
     for (int i=0; i<n; i++) {
        for (int j=0; j<=n; j++) {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
     for (int i = 0; i < n; i++)
     {
          value[i] = a[i][n]/a[i][i];
     }
     printf("Vlaue of eqn is: %0.2fx^2+%0.2fx+%0.2f",fabs(value[0]),fabs(value[1]),fabs(value[2]));
     
}


int main()
{
    int n;
    float sx=0,sy=0,sxy=0,sx2y=0,sx2=0,sx3=0,sx4=0;
    printf("Enter no. of observations\n");
    scanf("%d",&n);
    float x[n],y[n],a[3][4];
    printf("Enter values of x\n");
    for(int i=0;i<n;i++)
      scanf("%f",&x[i]);
    printf("Enter values of y\n");
    for(int i=0;i<n;i++)
      scanf("%f",&y[i]); 
    for(int i=0;i<n;i++)
    {
        sx=sx+x[i];
        sy=sy+y[i];
        sxy=sxy+x[i]*y[i];
        sx2y=sx2y+x[i]*x[i]*y[i];
        sx2=sx2+x[i]*x[i];
        sx3=sx3+x[i]*x[i]*x[i];
        sx4=sx4+x[i]*x[i]*x[i]*x[i];
    }
    a[0][0]=sx2;
    a[0][1]=sx;
    a[0][2]=n;
    a[0][3]=sy;
    a[1][0]=sx3;
    a[1][1]=sx2;
    a[1][2]=sx;
    a[1][3]=sxy;
    a[2][0]=sx4;
    a[2][1]=sx3;
    a[2][2]=sx2;
    a[2][3]=sx2y;
    //Applying gauss jordan to solve the equation: 
    gaussjordan(a,3);

}