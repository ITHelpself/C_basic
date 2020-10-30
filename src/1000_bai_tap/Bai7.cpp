//   1/2 + 2/3 + 3/4 + …. + n / n + 1
#include<stdio.h>
int main(){
    int n;
    float S = 0;
    printf("n:");
    scanf("%d",&n);
    for(int i = 1;i<=n; i++){
        S +=i/(float)(i+1);//sử dụng thêm ép kiểu
    }
    printf("S = %.2f",S);
    return 0;
}