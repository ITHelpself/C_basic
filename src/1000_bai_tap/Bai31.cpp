// so nguyen to la so chia het cho 1 va chinh no
// 1 2 3 5 7 ...
#include<stdio.h>
int main(){
    int n;
    bool laSoNguyenTo = true;
    printf("n:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            laSoNguyenTo = false;
        }
    }
    if(laSoNguyenTo){
        printf("%d la so nguyen to",n);
    }
    else{
        printf("%d khong phai la so nguyen to",n);
    }
    return 0;
}