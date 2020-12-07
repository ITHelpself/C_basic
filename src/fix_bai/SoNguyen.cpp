#include<stdio.h>
#include<math.h>
void nhap(int &a, int &b);
void hoanVi(int &a, int &b);
int tinhTong(int a, int b);
int tinhHieu(int a, int b);
int tinhTich(int a, int b);
float tinhThuong(int a, int b);
int timUCLN(int a, int b);// theo Euclid
int timBCNN(int a, int b);// theo Euclid
void xuatTong(int a, int b);
void xuatHieu(int a, int b);
void xuatTich(int a, int b);
void xuatThuong(int a, int b);
void xuatLuyThua(int a, int b);
void xuatUCLN(int a, int b);
void xuatBCNN(int a, int b);
void lietKeUSC(int a, int b);
void menu(int a, int b);
int main(){
    int a, b;
    nhap(a,b);
    menu(a,b);
    return 0;
}
void nhap(int &a, int &b){
    printf("a,b: ");
    scanf("%d%d",&a,&b);
}
void hoanVi(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int tinhTong(int a, int b){
    return a+b;
}
int tinhHieu(int a, int b){
    return a-b;
}
int tinhTich(int a, int b){
    return a*b;
}
float tinhThuong(int a, int b){
    float thuong = 0;
    if(b == 0){
        printf("\n error: b=0");
    }
    else
    {
        thuong = (float)a/b;
    }
    return thuong;
}
int timUCLN(int a, int b){

    while (a!=b)
    {
        if(a>b){
            a=a-b;
        } else{
            b = b-a;
        }
    }
    return a;
}
int timBCNN(int a, int b){
    return (a*b)/timUCLN(a,b);
}
void xuatTong(int a, int b){
    int tong = tinhTong(a, b);
    printf("\n%d+%d = %d",a,b,tong);
}
void xuatHieu(int a, int b){
    int hieu = tinhHieu(a, b);
    printf("\n%d-%d = %d",a,b,hieu);
}
void xuatTich(int a, int b){
    int tich = tinhTich(a, b);
    printf("\n%d*%d = %d",a,b,tich);
}
void xuatThuong(int a, int b){
    int thuong = tinhThuong(a, b);
    printf("\n%d/%d = %d",a,b,thuong);
}
void xuatLuyThua(int a, int b){
    float luythua = pow(a,b);
    printf("\n%d^%d = %d",a,b,luythua);
}
void xuatUCLN(int a, int b){
    int ucln = timUCLN(a,b);
    printf("UCLN = %d",ucln);
}
void xuatBCNN(int a, int b){
    int bcnn = timBCNN(a,b);
    printf("\nBCNN = %d",bcnn); 
}
void lietKeUSC(int a, int b){
    printf("\nUSC:");
    int min = (a>b)?b:a;
    for (int i = 1; i <= min; i++)
    {
        if(a%i==0 && b%i==0){
            printf("%d ",i);
        }
    }
    
}
void menu(int a, int b){
    int luachon;
    do{
        printf("----------------------menu------------------\n");
        printf("1.hoanvi\n");
        printf("2.Tong\n");
        printf("3.Hieu\n");
        printf("4.Tich\n");
        printf("5.Thuong\n");
        printf("6. Luy thua\n");
        printf("7.liet ke USC\n");
        printf("8.UCLN\n");
        printf("9.BCNN\n");
        printf("--------------------------------------------\n");
    // nhap lua chon
        printf("lua chon cua ban?");
        scanf("%d",&luachon);
        switch (luachon)
        {
        case 1:
            hoanVi(a,b);
            printf("\n a = %d, b=%d",a,b);
            break;
        case 2:
            xuatTong(a,b);
            break;
        case 3:
            xuatHieu(a,b);
            break;
        case 4:
            xuatTich(a,b);
            break;
        case 5:
            xuatThuong(a,b);
            break;
        case 6:
            xuatLuyThua(a,b);
            break;
        case 7:
            lietKeUSC(a,b);
            break;
        case 8:
            xuatUCLN(a,b);
            break;
        case 9:
            xuatBCNN(a,b);
            break;
        default:
            printf("lua chon khong hop le!");
            break;
        }
        printf("\nBan co muon thoat ra khong(Nhan phim 0 de thoat!)?");
        scanf("%d",&luachon);
    }while(luachon);
}
