//Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
#include <stdio.h>
void nhap(float a[], int &n);
void xuat(float a[], int n);
float timMax(float a[], int n);
void xuatMax(float a[], int n);
int main(){
    float a[50];
    int n;
    nhap(a,n);
    xuat(a,n);
    xuatMax(a,n);
    return 0;
}
void nhap(float a[], int &n){
    float temp;
    printf("n:");
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        printf("a[%d]: ",i);
        scanf("%f",&temp);
        a[i] = temp;
    }
}
void xuat(float a[], int n){
    for(int i =0;i<n;i++){
        printf("%.2f ",a[i]);
    }
}
float timMax(float a[], int n){
    float max = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
void xuatMax(float a[], int n){
    float max = timMax(a,n);
    printf("\nmax = %.2f",max);
}