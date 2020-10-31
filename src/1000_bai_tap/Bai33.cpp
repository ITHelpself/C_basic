// Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float S = 0;
    printf("nhap n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        S = sqrt(2 + S);
    }
    printf("S(%d) = %f",n,S);
    return 0;
}