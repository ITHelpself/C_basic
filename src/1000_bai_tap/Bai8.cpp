//   S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
#include<stdio.h>
int main(){
    int n;
    float S = 0;
    printf("n:");
    scanf("%d",&n);
    for(int i = 1;i<=n; i++){
        S +=(2*i+1)/(float)(2*i+2);//sử dụng thêm ép kiểu
    }
    printf("S = %.2f",S);
    return 0;
}