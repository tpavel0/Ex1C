
#include <stdio.h>
#include "myMath.h"


int main()
{
   double fx, x;
   printf("Please insert a real number:");
   scanf("%lf",&x);
    // f(x) =e^x+x^3-2
   fx = sub(add(Exp((int)x),Pow(x,3)),2);
   printf("\nthe value of f(x)=e^x+x^3-2 at the point %.4f is %.4f" ,x,fx);
   // f(x) = 3x+2x^2
   fx = add(mul(x,3),Pow(mul(x,2),2)); 
   printf("\nthe value of f(x)=3x+2x^2 at the point %.4f is %.4f" ,x,fx);
   //f(x)= (4x^3)/5-2x
   fx= sub(div(Pow(mul(x,4),3),5),mul(x,2));
   printf("\nthe value of (4x^3)/5-2x at the point %.4f is %.4f" ,x,fx);
   return 0;

}