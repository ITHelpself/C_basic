//Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
#include <stdio.h>
void nhap(float a[], int &n);
void xuat(float a[], int n);
float timMin(float a[], int n);
void xuatMin(float a[], int n);
void timViTriMin(float a[], int n);
int main(){
    float a[50];
    int n;
    nhap(a,n);
    xuat(a,n);
    xuatMin(a,n);
    timViTriMin(a,n);
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
float timMin(float a[], int n){
    float min = a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}
void xuatMin(float a[], int n){
    float min = timMin(a,n);
    printf("\nmin = %.2f",min);
}
void timViTriMin(float a[], int n){
    printf("vi tri min:");
    float min = timMin(a,n);
    for(int i=0;i<n;i++){
        if(a[i] == min){
            printf("\n%d ",i);
        }
    }
}