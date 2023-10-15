#include<stdio.h>
#include<math.h>
float f(float x)
{
    return 3*x-cos(x)-1;
}
float fd(float x)
{
    return  3-sin(x);
}
int main()
{
    float x0,x1,err;
    while(1)
    {
       printf("Enter the value of x0\n");
       scanf("%f",&x0);
       if(fd(x0)==0)
        {
            printf("Wrong input.Enter value of x0 again\n");
        }
        else 
        {
            printf("Valid value %f\n",x0);
            break; 
        }
    }
    printf("Enter allowed error :");
    scanf("%f",&err);
    int itr=0;  
    while(1)
    {
         itr++;
         x1 = x0 - (f(x0)/fd(x0));
         if(fabs(x1-x0)<=err)
         {
            printf("value of x%d is %f\n",itr,x1);
            break;
         }
         else 
         {
            printf("value of x%d is %f\n",itr,x1);
            x0=x1;
         }
    }
}