// thu vien, marcro
#include<stdio.h>
#define MAXSIZE 50
// nguyen mau ham
void nhap(int mang[], int &sophantu);
float tinhTrungBinhLe(int mang[], int sophantu);
void xuatTrungBinhLe(int mang[], int sophantu);
// xay dung ham
int main(){
    // khai bao
    int mang[MAXSIZE];
    int sophantu;
    // nhap
    nhap(mang,sophantu);
    xuatTrungBinhLe(mang,sophantu);
    return 0;
}
void nhap(int mang[], int &sophantu){
    do{
        printf("so phan tu(so phan tu > 0): ");
        scanf("%d",&sophantu);
    } while(sophantu<=0);
    printf("danh sach phan tu:\n");
    for(int vitri=0;vitri<sophantu;vitri++){
        int tam;
        printf("a[%d]:",vitri);
        scanf("%d",&tam);
        mang[vitri] = tam;        
    }
}
float tinhTrungBinhLe(int mang[], int sophantu){
    float trungbinhle = 0;
    float tongle = 0;
    int soluongle = 0;
    for(int vitri = 0; vitri < sophantu;vitri++){
        if(mang[vitri] %2 != 0){
            tongle += mang[vitri];
            soluongle++;
        }       
    }
    trungbinhle = tongle/soluongle;
    return trungbinhle;
}
void xuatTrungBinhLe(int mang[], int sophantu){
    float trungbinhle = tinhTrungBinhLe(mang, sophantu);
    printf("\n trung binh le: %.2f",trungbinhle);
}