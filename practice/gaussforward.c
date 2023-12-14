#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float x;
    printf("Enter the range of the value: ");
    scanf("%d",&n);
    float a[100][100];
    printf("Enter the value of the x: \n");
    for (int i = 0; i < n; i++)
    {
            scanf("%f",&a[i][0]);
    }
    for (int j = 0; j < n; j++)
    {
            scanf("%f",&a[j][1]);
    }
      for(int j = 2 ; j<=n;j++){
        for(int i = 0;i<n-j+1;i++ ){
            a[i][j] =  a[i+1][j-1] - a[i][j-1];
        }
    }
    printf("\n%f\n",a[1][0]);
        for(int i = 0;i<n;i++){
        for (int j = 0; j <= n-i; j++)
        {   
            printf("%f ",a[i][j]);
            
        }
        printf("\n");
        
    }
    printf("Enter the value of x: ");
    scanf("%f",&x);
    float u = (x-a[n-1][0])/(a[1][0]-a[0][0]);
    float u1 = u;
    float y = a[n-1][1];
    float fact =1;
    int j=2;
    for (int i = n-2; i >=0; i--)
    {
       y = y+((u1*a[i][j])/fact);
       fact = fact*i;
       u1 = u1*(u+(j-1));
       j++;
    }
    printf("Answer = %f",y);
    
    
}