// Bài 16: Tính S(n) = x + (x^2)/(1 + 2)) + x^3/1 + 2 + 3 + … + (x^n)/(1 + 2 + 3 + …. + N)
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
        mau = 0;
        for(int j =1; j<=i;j++){
            mau +=j;// j khong phai i
        }
        S+= pow(x,i)/(float)mau;
    }
    printf("S = %.2f",S);// 1+ 1/3 + 1/6 = 1.5
    return 0;
}