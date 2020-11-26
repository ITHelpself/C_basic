#include <stdio.h>
void hoanVi(int &a, int &b);
void nhap(int a[], int &n);
void xuat(int a[], int n);
void sapXep(int a[], int n);
int demSoLuongGiaTriPhanBiet(int a[], int n);
int demSoLuongGiaTriLonNhat(int a[], int n);
void xuatSoLuongGiaTriPhanBiet(int a[], int n);
void xuatSoLuongGiaTriLonNhat(int a[], int n);
void lietKeXuatHienKhongQuaMotLan(int a[], int n);
int timGiaTriLonNhat(int a[],int n);
int main(){
    int a[50];
    int n;
    nhap(a, n);
    xuat(a,n);
    xuatSoLuongGiaTriPhanBiet(a,n);
    xuatSoLuongGiaTriLonNhat(a,n);
    lietKeXuatHienKhongQuaMotLan(a,n);
    return 0;
}
void hoanVi(int &a, int &b){
    int tam = a;
    a = b;
    b = tam;
}
void nhap(int a[], int &n){
    printf("n: ");
    scanf("%d",&n);
    printf("nhap mang:");
    for(int i = 0; i < n; i++){
        int tam;
        printf("a[%d]:",i);
        scanf("%d",&tam);
        a[i]=tam;
    }
}
void xuat(int a[], int n){
    for(int i=0; i<n;i++){
        printf("%d ",a[i]);
    }   
}
void sapXep(int a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i; j<n;j++){
            if(a[i]>a[j]){
                hoanVi(a[i],a[j]);
            }
        }
    }
}
int demSoLuongGiaTriPhanBiet(int a[], int n){
    int soluong = 0;
    sapXep(a,n);
    for(int i = 0; i < n-1;i++){
        if(a[i]!= a[i+1]){
            soluong++;
        }        
    }
    return soluong+1;
}
int demSoLuongGiaTriLonNhat(int a[], int n){
    int soluong = 0;
    int giatrilonnhat = timGiaTriLonNhat(a,n);
    for(int i = 0; i < n;i++){
        if(a[i] == giatrilonnhat){
            soluong++;
        }
    }
    return soluong;
}
void xuatSoLuongGiaTriPhanBiet(int a[], int n){
    int soluong = demSoLuongGiaTriPhanBiet(a,n);
    printf("\nso luong gia tri phan biet: %d",soluong);
}
void xuatSoLuongGiaTriLonNhat(int a[], int n){
    int soluong = demSoLuongGiaTriLonNhat(a,n);
    printf("\nso luong gia tri lon nhat: %d",soluong);
}
int timGiaTriLonNhat(int a[],int n){
    int giatrilonnhat = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>giatrilonnhat){
            giatrilonnhat = a[i];
        }           
    }
    return giatrilonnhat;
}
void lietKeXuatHienKhongQuaMotLan(int a[], int n){
    int soluong = 0;
    printf("\n Liet ke xuat hien khong qua mot lan:");
    sapXep(a,n);
    for(int i=0; i<n;i++){
        if(a[i] == a[i+1]){
            soluong++;
        }
        else{
            if(soluong==0){
                printf("%d ",a[i]);
            }
            else{
                soluong = 0;
            }
        }
    }
}