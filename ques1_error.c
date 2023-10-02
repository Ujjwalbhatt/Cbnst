#include<stdio.h>
#include<math.h>
int main()
{
    float app_val;
    float ex_val;
    printf("Enter the approx value and exact value : \n");
    scanf("%f%f",&app_val,&ex_val);

    float pctgerr,abserr,rlterr;
    abserr = fabs(ex_val-app_val);
    rlterr = abserr/ex_val;
    pctgerr = rlterr*100;

    printf("Absolute Error  : %f \nRelative Error : %f \nPercentage Error : %f \n",abserr,rlterr,pctgerr);

}