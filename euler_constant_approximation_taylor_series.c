#include<stdio.h>
int factorial(int a);
int main() {
    int n;
    printf("Enter a non negative integer n less than 34:\n");
    scanf("%d",&n);
    double arr[100]={0};
    for (int i=0;i<=n;i++){
        arr[i]=factorial(i);
    }
    double e=0;
    for (int i=0;i<=n;i++){
        e=e+(1/arr[i]);
    }
    printf("Your e estimate is %lf",e);
    return 0;
}
int factorial(int a){
    int result=1;
    if(a==0){
        return result;
    }
    else if(a>0){
        for(int i=1;i<=a;i++){
            result=result*i;
        }
        return result;
    }
}