#include<stdio.h>
#include<math.h>
int main()
{
    char function[10];
    printf("Enter the polynomial function : ");
    scanf("%[^\n]s",&function);
    printf("Function is : %s\n",function);
    int x,y,z;
    float del_x,del_y,del_z;
    printf("Enter the value of x, y and z : ");
    scanf("%d%d%d",&x,&y,&z);
    printf("Enter the error in x,y and z : ");
    scanf("%f%f%f",&del_x,&del_y,&del_z);

    float u = 4*x*x*y*y*y/z*z*z*z; // u = f(x,y,z)
    float del_ux = 8*x*y*y*y/z*z*z*z; // del_u = del_f/del_x * del_x + del_f/del_y * del_y + del_f/del_z * del_z
    float del_uy = 12*x*x*y*y/z*z*z*z;   
    float del_uz = 16*x*x*y*y*y/z*z*z*z*z;
    float del_u  =  fabs(del_ux*del_x)+ fabs(del_uy*del_y)+fabs(del_uz*del_z);
    printf("Absolute error = %f\n",del_u);
    printf("Relative error = %f\n",del_u/u);
    printf("Percentage error = %f\n",del_u/u*100);


}

// Explain
// 1. What is the difference between absolute error, relative error and percentage error?
// 2. What is the difference between absolute error and relative error?
// 3. What is the difference between relative error and percentage error?
// 4. What is the difference between absolute error and percentage error?
// answer
// 1. Absolute error is the difference between the actual value and the measured value. Relative error is the ratio of the absolute error to the actual value. Percentage error is the ratio of the absolute error to the actual value multiplied by 100.
// 2. Absolute error is the difference between the actual value and the measured value. Relative error is the ratio of the absolute error to the actual value.
// 3. Relative error is the ratio of the absolute error to the actual value. Percentage error is the ratio of the absolute error to the actual value multiplied by 100.
// 4. Absolute error is the difference between the actual value and the measured value. Percentage error is the ratio of the absolute error to the actual value multiplied by 100.




