#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (x*x*x)+(2*x*x)+x-1;
}
int main()
{
    float x0,x1,err;
    int flag=0;
    do
    {
    printf("Enter the values of x1 and x2 : \n");
    scanf("%f%f",&x0,&x1); 

    if((f(x0)*f(x1))<0)
    {
        flag=1;
        printf("Two roots lie b/w %f and %f \n",x0,x1);
    }
    else
    {
         printf("Invalid Input. Try Again!!! \n");
    }
    } while(flag==0);
    printf("Enter the allowed error : \n");
    scanf("%f",&err);

    int itr=0;
    while(1)
    {
        itr++;
        float x2=(x0*f(x1) - x1*f(x0))/(f(x1)-f(x0));
        float ans = f(x2);
        printf("%d Iteration, value of x2 = %f, value of f(%f) is %f \n",itr,x2,x2,ans);
        if(fabs(ans)<err)
        {
            break;
        }
        else if((f(x0)*f(x2))<0)
        {
            x1=x2;
        }
        else
        {
            x0=x2;
        }

    }


}