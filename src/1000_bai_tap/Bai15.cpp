// Bài 15: Tính S(n) = 1 + 1/(1 + 2) + 1/ (1 + 2 + 3) + ….. + 1/( 1 + 2 + 3 + …. + N)
#include<stdio.h>
int main(){
    int n;
    float S = 0;
    float mau = 0;
    printf("n: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        mau = 0;
        for(int j =1; j<=i;j++){
            mau+=j;
        }
        S+=1/(float)mau;
    }
    printf("S = %.2f",S);// 1+ 1/3 + 1/6 = 1.5
    return 0;
}