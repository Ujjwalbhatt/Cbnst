#include<stdio.h>
#include<math.h>

float f1(float x,float y,float z)
{
   return (44-y-2*z)/10;
}
float f2(float x,float y,float z)
{
   return (51-2*x-z)/10;
}

float f3(float x,float y,float z)
{
   return (61-x-2*y)/10;
}
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int itr=1;
 printf("Enter allowed error:\n");
 scanf("%f", &e);

 printf("\nCount\t\tx\t\ty\t\tz\n");
 do
 {
  
  x1 = f1(x0,y0,z0);
  y1 = f2(x1,y0,z0);
  z1 = f3(x1,y1,z0);
  printf("%d\t%f\t%f\t%f\n",itr,x1,y1,z1);

  
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  itr++;

 
  x0 = x1;
  y0 = y1;
  z0 = z1;

 }while(e1>e && e2>e && e3>e);

 printf("\nSolution: x=%f, y=%f and z = %f\n",x1,y1,z1);
 return 0;
}