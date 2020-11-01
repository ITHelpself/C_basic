
// Bài 115: Viết chương trình nhập họ tên, điểm toán, điểm văn của 1 học sinh. Tính điểm trung bình và xuất ra kết quả
#include<stdio.h>
void nhap(char hoten[], float &diemtoan, float &diemvan){
    fflush(stdin);
    printf("ho ten:");
    gets(hoten);
    printf("diem toan: ");
    scanf("%f",&diemtoan);
    printf("diem van: ");
    scanf("%f",&diemvan);
}
float tinhDiemTrungBinh(float diemtoan, float diemvan){
    return (diemtoan+diemvan)/2;
}
void xuatDiemTrungBinh(float diemtoan, float diemvan){
    float diemtrungbinh = tinhDiemTrungBinh(diemtoan, diemvan);
    printf("diem trung binh: %.2f",diemtrungbinh);
}
int main(){
    char hoten[50];
    float diemtoan;
    float diemvan;
    nhap(hoten,diemtoan,diemvan);
    xuatDiemTrungBinh(diemtoan,diemvan);
    return 0;
}