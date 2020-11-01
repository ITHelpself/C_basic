//Bài 119: Liệt kê tất cả các số nguyên tố nhỏ hơn n
#include<stdio.h>
void nhap(int &n){
    printf("n: ");
    scanf("%d",&n);
}
void lietKeSoNguyenToNhoHon(int n){
    int dem = 0;
    for(int i =1;i<n;i++){
        dem = 0;
        for(int j=1;j<=i;j++){
            if(i%j == 0){
                dem++;
            }
        }
        if(dem == 2){
            printf("%d ",i);
        }
    }
}
int main(){
    int n;
    nhap(n);
    lietKeSoNguyenToNhoHon(n);
    return 0;
}