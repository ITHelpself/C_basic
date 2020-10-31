// Bài 45: Hãy tính tích các chữ số của số nguyên dương n
#include<stdio.h>
int main(){
    int n;
    int tich = 1;
    printf("nhap n:");
    scanf("%d",&n);
    int temp = n;
    while(temp!=0){
        tich *=temp%10;
        temp/=10;
    }
    printf("so %d co tich cac chu so la %d",n,tich);
    return 0;
}
