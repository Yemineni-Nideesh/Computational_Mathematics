#include <stdio.h>
#include <math.h>
float f(float x);
int main() {
    float a,b;
    printf("Enter a,b(a<b) and a,b in the range of -1 and 1:\n");
    scanf("%f,%f",&a,&b);
    float d=(b-a)/1000;
    float Larea=0;
    for(int i=0;i<1000;i++){
        Larea=Larea+(f(a+i*d))*d;
    }
    float Harea=0;
    for(int i=1;i<1001;i++){
        Harea=Harea+(f(a+i*d))*d;
    }
    printf("\nThe estimated area bounded by semicircle in between %.2f and %.2f is between %f and %f ",a,b,Larea,Harea);
    return 0;
}
float f(float x){
    return sqrt(1-x*x);
}