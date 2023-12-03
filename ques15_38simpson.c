#include<stdio.h>
float f(float x)
{
    return 1/(1+x*x);
}
int main()
{
    int n;
    float i,a,b,sum=0,h;
    int position=1;
    printf("Enter Value of a and b\n");
    scanf("%f%f",&a,&b);
    printf("Enter no. of Intervals\n");
    scanf("%d",&n);
    h=(b-a)/n;
    sum = f(a) +f(b);
    for(i=a+h;i<b;i=i+h)
    {
       if(position %3 ==0)
         sum = sum + 2*f(i);
       else
         sum = sum + 3*f(i); 
       position++;   
    }
    sum = (3*h)/8 * sum;
    printf("\nValue of The integral  = %f",sum);    
    
}