//  1/(1×2) + 1/(2×3) +…+ 1/n x (n + 1)
#include<stdio.h>
int main(){
    int n;
    float S = 0;
    printf("n:");
    scanf("%d",&n);
    for(int i = 1;i<=n; i++){
        S +=1/(float)(i*(i+1));//sử dụng thêm ép kiểu
    }
    printf("S = %.2f",S);
    return 0;
}