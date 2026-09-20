#include <stdio.h>
double f(double x);
int main() {
    double x;
    printf("Enter the point at which you want to calculate the derivative of the fuction 10x^4+2x^3+x+1:\n");
    scanf("%lf",&x);
    double h=0.000001;
    printf("\nThe derivate at point %lf if %lf",x,(f(x+h)-f(x))/h);
    return 0;
}
double f(double x){
    return 10*x*x*x*x+2*x*x*x+x+1;
}