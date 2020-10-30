// Tính S(n) = 1 + 1/4 + 1/6 + … + 1/2n
#include<stdio.h>
int main(){
    int n;
    float S = 0;
    printf("n:");
    scanf("%d",&n);
    for(int i = 1;i<=n; i++){
        S +=1/(float)(2*i);//sử dụng thêm ép kiểu
    }
    printf("S = %.2f",S);// 1/2 + 1/4 + 1/6 = 0.5 + 0.25 + 0.17 = 0.92 
    return 0;
}