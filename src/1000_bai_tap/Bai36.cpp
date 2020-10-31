//Bài 36: Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dấu căn
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float S = 0;
    float giaithua = 1;
    printf("nhap n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        giaithua = 1;
        for(int j = 1;j<=i;j++){
            giaithua*=i;
        }
        S = sqrt(S+giaithua);
    }
    printf("S(%d) = %f",n,S);
    return 0;
}