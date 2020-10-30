//  Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    float S = 0;
    float mau = 0;
    printf("x:");
    scanf("%d",&x);
    printf("n: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        mau = 1;
        for(int j =1; j<=2*i;j++){
            mau *=j;// mau la giai thua
        }
        S+= pow(x,2*i)/(float)mau;
    }
    printf("S = %.2f",S);
    return 0;
}