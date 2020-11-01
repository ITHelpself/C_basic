//Bài 116: Viết chương trình nhập n và tính tổng S = 1 + 2 + 3 + … + n
#include<stdio.h>
void nhap(int &n){
    printf("n: ");
    scanf("%d",&n);
}
float tinhTong(int n){
    float tong = 0;
    for(int i =1;i<=n;i++){
        tong+=i;
    }
    return tong;
}
void xuatTong(int n){
    float tong = tinhTong(n);
    printf("tong = %.2f",tong);
}
int main(){
    int n;
    nhap(n);
    xuatTong(n);
    return 0;
}