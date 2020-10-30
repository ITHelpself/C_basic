// Tinh S(n) = 1 + 2 + 3 + … + n
#include<stdio.h>// sử dụng printf, scanf phải thêm thư viện stdio
int main(){
    int n;
    float S = 0;
    printf("n: ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        S += i;
    }
    printf("S = %.2f",S);// 1+2+3 = 6
    return 0;
}