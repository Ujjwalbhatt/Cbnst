//C Program to Implement Simpson's 1/3 Rule

#include<stdio.h>

float f(float x)
{
    return 1/(1+x*x);
}
int main()
{
    int n;
    float i,a,b,sum=0,h;
    int position_of_term=1;
    //Input
    printf("Enter Value of a and b\n");
    scanf("%f%f",&a,&b);
    printf("Enter no. of Intervals\n");
    scanf("%d",&n);
    h=(b-a)/n;
    sum = f(a) +f(b);
    printf("\n%f\n",h);
    printf("\n%f\n",sum);
    for(i=a+h;i<b;i=i+h)
    {
       if(position_of_term %2 ==0)
         sum = sum + 2*f(i);
       else
         sum = sum + 4*f(i); 
       position_of_term++;   
    }
    sum = (h * sum)/3;
    printf("\nValue of The integral  = %f",sum);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
}