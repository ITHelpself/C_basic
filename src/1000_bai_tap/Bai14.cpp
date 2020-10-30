// Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    float S = 0;
    printf("n:");
    scanf("%d",&n);
    printf("x:");
    scanf("%d",&x);
    for(int i=1;i<=n;i++){
        S+=pow(x,2*i+1);
    }
    printf("S = %.2f",S);// sau này được copy bài của mình, dùng bài của mình làm ref(tài liệu)
    return 0;
}