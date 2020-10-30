// Tính S(n) = 1^2 + 2^2 + … + n^2
#include<math.h>// sử dụng pow trong math.h để lấy mũ, bình phương
#include<stdio.h>
int main(){
    int n;
    float S = 0;
    printf("n:");
    scanf("%d",&n);
    for(int i = 1;i<=n; i++){
        S +=pow(i,2);
    }
    printf("S = %.2f",S);// 1^2 + 2^2 + 3^2 = 1 + 4+ 9 = 14
    return 0;
}