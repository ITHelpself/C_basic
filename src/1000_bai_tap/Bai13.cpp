// Tính S(n) = x^2 + x^4 + … + x^2n
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
        S+=pow(x,2*i);
    }
    printf("S = %.2f",S);// sau này được copy bài của mình, dùng bài của mình làm ref(tài liệu)
    return 0;
}