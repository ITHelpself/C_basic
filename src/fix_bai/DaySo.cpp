#include<stdio.h>
#include<math.h>
void nhap(int &n);
bool laSoChinhPhuong(int n);// la so co can bac 2 la so nguyen
bool laSoDoiXung(int n);// so doi xung: 12321, 2332,...
bool laSoNguyenTo(int n);// la so chia het cho 1 va chinh no
bool laSoHoanThien(int n);// la so co tong uoc so nho hon no bang chinh no
bool coNamTrongDayFibonacci(int n);// day fibonacci: 1 1 2 3 5 8 13... 
int tinhTongCacSoChan(int n);
int tinhTichSoLe(int n);
int tinhTongCacSoLe(int n);
float tinhTrungBinhCongDay(int n);
int demSoLuongSoChan(int n);
int demSoLuongSoDoiXung(int n);
int demSoLuongSoNguyenTo(int n);
void xuatDayTang(int n);
void xuatDayGiam(int n);
void xuatTongChan(int n);
void xuatTongLe(int n);
void xuatTichLe(int n);
void xuatTrungBinhCongDay(int n);
void xuatSoLuongSoNguyenTo(int n);
void xuatSoLuongSoChan(int n);
void xuatSoLuongSoDoiXung(int n);
void lietKeSoChan(int n);
void lietKeSoLe(int n);
void lietKeSoChinhPhuong(int n);
void lietKeSoDoiXung(int n);
void lietKeSoNguyenTo(int n);
void lietKeSoTrongDayFibonacci(int n);
void menu(int n);
int main(){
    int n;
    nhap(n);
    menu(n);
    return 0;
}
void nhap(int &n){
    printf("n: ");
    scanf("%d",&n);
}
bool laSoChinhPhuong(int n){
    return sqrt(n)== (int)sqrt(n);// số chính phương là số có căn bậc 2 là một số nguyên
}
bool laSoDoiXung(int n){
    int lasodoixung=true;
    int sodaonguoc = 0;
	int chuso;
	int temp=n;
	while(temp!=0){
	    chuso=temp%10;
		sodaonguoc=sodaonguoc*10+chuso;
		temp/=10;
	}
	return sodaonguoc == n;
}
bool laSoNguyenTo(int n){
    bool lasonguyento = true;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            lasonguyento = false;
        }
    }
    return lasonguyento;
}
bool laSoHoanThien(int n){
    bool lasohoanthien = true;
    int tong = 0;// tổng số ước số nhỏ hơn n
    for(int i=1;i < n;i++){
        if(n%i==0){
            tong+=i;
        }
    }
    return tong==n;
}
bool coNamTrongDayFibonacci(int n){// có nằm trong dãy fibonacci hay không?
    int conamtrongday = false;
    int a[100];
    a[0] = 1,a[1] =1;// số đầu tiên và số thứ 2 trong dãy fibonacci là 1
    if(n==a[0] ||n ==a[1]){
        conamtrongday = true;
    }
    else{
        for(int i=2;i<n;i++){
            a[i]= a[i-2]+a[i-1];// số tiếp theo bằng tổng 2 số liền trước
            if(n==a[i]){
                conamtrongday = true;
                break;
            }
        }
    }
    return conamtrongday;
}
int tinhTongCacSoChan(int n){
    int tong = 0;
    for(int i=2;i<=n;i+=2){
        tong+=i;
    }
    return tong;
}
int tinhTongCacSoLe(int n){
 int tong = 0;
    for(int i=1;i<=n;i+=2){
        tong+=i;
    }
    return tong;
}
int tinhTichSoLe(int n){
    int tich = 1;
    for(int i=1;i<=n;i+=2){
        tich*=i;
    }
    return tich;
}
float tinhTrungBinhCongDay(int n){
    int tong = 0;
    for(int i=1;i<=n;i++){
        tong+=i;
    }
    return (float)tong/n;
}
int demSoLuongSoChan(int n){
    return n/2;
}
int demSoLuongSoDoiXung(int n){
    int soluong=0;
    for (int i = 1; i<=n; i++)
    {
        if(laSoDoiXung(i)){
            soluong++;
        }
    }  
    return soluong;
}
int demSoLuongSoNguyenTo(int n){
 int soluong=0;
    for (int i = 1; i<=n; i++)
    {
        if(laSoNguyenTo(i)){
            soluong++;
        }
    }  
    return soluong;
}
void xuatDayTang(int n){
    printf("\nDay tang: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }   
}
void xuatDayGiam(int n){
    printf("\nDay tang: ");
    for (int i = n; i >=1; i--)
    {
        printf("%d ",i);
    }  
}
void xuatTongChan(int n){
    int tong = tinhTongCacSoChan(n);
    printf("\nTong chan:%d ",tong);
}
void xuatTongLe(int n){
    int tong = tinhTongCacSoLe(n);
    printf("\nTong le:%d ",tong);
}
void xuatTichLe(int n){
    int tich = tinhTichSoLe(n);
    printf("\nTich le:%d ",tich);
}
void xuatTrungBinhCongDay(int n){
    float trungbinhcong = tinhTrungBinhCongDay(n);
    printf("\nTrung binh cong day:%.2f ",trungbinhcong);
}
void xuatSoLuongSoNguyenTo(int n){
    int soluong= demSoLuongSoNguyenTo(n);
    printf("\nSo luong so nguyen to: %d",soluong);
}
void xuatSoLuongSoChan(int n){
    int soluong= demSoLuongSoChan(n);
    printf("\nSo luong so chan: %d",soluong);
}
void xuatSoLuongSoDoiXung(int n){
    int soluong= demSoLuongSoDoiXung(n);
    printf("\nSo luong so doi xung: %d",soluong);
}
void lietKeSoChan(int n){
  printf("\nDanh sach so chan: ");
    for (int i = 1; i<=n; i++)
    {
        if(i%2==0){
            printf("%d ",i);
        }
    }  
}
void lietKeSoLe(int n){
    printf("\nDanh sach so chan: ");
    for (int i = 1; i<=n; i++)
    {
        if(i%2!=0){
            printf("%d ",i);
        }
    } 
}
void lietKeSoChinhPhuong(int n){
    printf("\nDanh sach so chinh phuong: ");
    for (int i = 1; i<=n; i++)
    {
        if(laSoChinhPhuong(i)){
            printf("%d ",i);
        }
    }  
}
void lietKeSoDoiXung(int n){
    printf("\nDanh sach so chinh phuong: ");
    for (int i = 1; i<=n; i++)
    {
        if(laSoDoiXung(i)){
            printf("%d ",i);
        }
    }  
}
void lietKeSoNguyenTo(int n){
    printf("\nDanh sach so nguyen to: ");
    for (int i = 1; i<=n; i++)
    {
        if(laSoNguyenTo(i)){
            printf("%d ",i);
        }
    }  
}
void lietKeSoHoanThien(int n){
    printf("\nDanh sach so hoan thien: ");
    for (int i = 1; i<n; i++)
    {
        if(laSoHoanThien(i)){
            printf("%d ",i);
        }
    }  
}
void lietKeSoTrongDayFibonacci(int n){
       printf("\nDanh sach so trong day fibonacci: ");
    for (int i = 1; i<n; i++)
    {
        if(coNamTrongDayFibonacci(i)){
            printf("%d ",i);
        }
    }  
}
void menu(int n){
      int luachon;
    do{
        printf("----------------------menu------------------\n");
        printf("\n1. xuat Day Tang");
        printf("\n2. xuat Day Giam");
        printf("\n3. xuat Tong Chan");
        printf("\n4. xuat Tong Le");
        printf("\n5. xuat Tich Le");
        printf("\n6. xuat trung binh cong day");
        printf("\n7. xuat so luong so nguyen to");
        printf("\n8. xuat so luong so chan");
        printf("\n9. xuat so luong so doi xung");
        printf("\n10. liet ke so chinh phuong");
        printf("\n11. liet ke so chan");
        printf("\n12. liet ke so le");
        printf("\n13. liet ke so doi xung");
        printf("\n14. liet ke so nguyen to");
        printf("\n15. liet ke so hoan thien");
        printf("--------------------------------------------\n");
    // nhap lua chon
        fflush(stdin);
        printf("lua chon cua ban?");
        scanf("%d",&luachon);
        switch (luachon)
        {
        case 1:
            xuatDayTang(n);
            break;
        case 2:
            xuatDayGiam(n);
            break;
        case 3:
            xuatTongChan(n);
            break;
        case 4:
            xuatTongLe(n);
            break;
        case 5:
            xuatTichLe(n);
            break;
        case 6:
            xuatTrungBinhCongDay(n);
            break;
        case 7:
            xuatSoLuongSoNguyenTo(n);
            break;
        case 8:
            xuatSoLuongSoChan(n);
            break;
        case 9:
            xuatSoLuongSoDoiXung(n);
            break;
        case 10:
            lietKeSoChinhPhuong(n);
            break;
         case 11:
            lietKeSoChan(n);
            break;
        case 12:
            lietKeSoLe(n);
            break;
        case 13:
            lietKeSoDoiXung(n);
            break;
        case 14:
            lietKeSoNguyenTo(n);
            break;
        case 15:
            lietKeSoHoanThien(n);
            break;
        default:
            printf("lua chon khong hop le!");
            break;
        }
        printf("\nBan co muon thoat ra khong(Nhan phim 0 de thoat!)?");
        scanf("%d",&luachon);
    }while(luachon);
}