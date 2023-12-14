#include<stdio.h>
#include<math.h>
float f(float x){
    return x*x*x;
}
int main(){
    int n;
     float a,b,sum=0,h;
    printf("Enter the value of a and b: ");
    scanf("%f %f",&a,&b);
    printf("Enter no. of interval n: ");
    scanf("%d",&n);
    h = (b-a)/n;
    sum  = f(a) + f(b); 
    printf("%f",h);
    for (float i = a+h; i < b; i=i+h)
    {
        sum = sum + 2*f(i);
    }
    sum = (h*sum)/2;
    printf("\nValue of the integral  = %f",sum);
    return 0;
    }