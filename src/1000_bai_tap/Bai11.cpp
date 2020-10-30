// Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
#include<stdio.h>
int main(){
    int n;
    float S = 0;
    float T = 1;
    printf("n: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        T = 1;
        for(int j =1; j<=i;j++){
            T*=j;
        }
        S+=T;
    }
    printf("S = %.2f",S);// 1 + 1.2 + 1.2.3 = 1 + 2 + 6 = 9
    return 0;
}