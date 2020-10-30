// T(n) = 1 x 2 x 3…x N
#include<stdio.h>
int main(){
    int n;
    float T = 1;
    printf("n:");
    scanf("%d",&n);
    for(int i = 1;i<=n; i++){
        T *= i;
    }
    printf("T = %.2f",T);
    return 0;
}