//Bài 44: Hãy tính tổng các chữ số của số nguyên dương n
#include<stdio.h>
int main(){
    int n;
    int tong = 0;
    printf("nhap n:");
    scanf("%d",&n);
    int temp = n;
    while(temp!=0){
        tong +=temp%10;
        temp/=10;
    }
    printf("so %d co tong cac chu so la %d",n,tong);
    return 0;
}
