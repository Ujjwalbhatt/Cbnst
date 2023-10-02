#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

float p(float x){
    return (cos(x) - 1)/3;
}

float f(float x){
    return cos(x) - 3*x - 1;
}

int main(){
	float x0 , x1 ,error;
	int itr = 1;
	printf("Enter Initial value : ");
	scanf("%f" , &x0);
	printf("Enter allowed error : ");
	scanf("%f",&error);
	do{
		x1 = p(x0);
		itr++;
		printf("Iteration %d ,value of x1 is %f and f(x1) is %f\n",itr,x1,f(x1));
		if(itr > 100){
			printf("Not Convergent\n");
			return 0;
		}
		x0 = x1;
	}while(fabs(f(x1)) > error);
	printf("The Roots of the equation is %f" , x1);
}
