//Bisection method

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
float f(float x){
    return ((x*x*x) - x - 1);
}

int main(){
    float x0,x1,x2;
    float err,ans;
    int itr= 0 ;
     while(1){
            printf("Enter the value of x1 and x2: ");
            scanf("%f %f",&x0,&x1);
            if(f(x0)*f(x1)<0){
                printf("Valid value of x0 = %f and x1 = %f",x0,x1);
               break;
            }   
            printf("\nEnter the valid values!\n");
     }
    printf("\nEnter the error: ");
    scanf("%f",&err);
    while(1){
        itr++;
        x2 = (x0+x1)/2;
        ans = f(x2);
        printf("%d iteration value of x0 = %f, x1 = %f, x2 = %f and f(x2) = %f\n",itr,x0,x1,x2,ans);
        if(fabs(ans) < err){
            break;
        }
        else if((f(x0)*f(x2))<0){
            x1 = x2;
        }
        else{
            x0 = x2;
        }
    }
    
    return 0;
}