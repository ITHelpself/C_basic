// Tính S(n) = 1 + ½ + 1/3 + … + 1/n
#include<stdio.h>
int main(){
    int n;
    float S = 0;
    printf("n:");
    scanf("%d",&n);
    for(int i = 1;i<=n; i++){
        S +=1/(float)i;//sử dụng thêm ép kiểu
    }
    printf("S = %.2f",S);// 1 + 1/2 + 1/3 + 1/4 = 1 + 0.5 + 0.333 + 0.25 = 2.08
    return 0;
}