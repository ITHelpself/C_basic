// T(n) = x^n
#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    float mu;
    printf("n:");
    scanf("%d",&n);
    printf("x:");
    scanf("%d",&x);
    mu = pow(x,n);
    printf("%d ^ %d = %.2f",x,n,mu);
    return 0;
}