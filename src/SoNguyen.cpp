#include <stdio.h>
void nhap(int &a, int &b);
void hoanVi(int &a, int &b);
void xuat(int a, int b);
int main(){
    int a,b;// cần thay đổi giá trị
    nhap(a,b);
    hoanVi(a,b);
    xuat(a,b);
    return 0;
}
void nhap(int &a, int &b){
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
}
void hoanVi(int &a, int &b){
    int tam = a;
    a = b;
    b = tam;
}
void xuat(int a, int b){
    printf("a = %d, b = %d\n",a,b);
}