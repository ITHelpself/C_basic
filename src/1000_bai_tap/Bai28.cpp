// Bài 28: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó
#include<stdio.h>
int main(){
    int n;
    float tong = 0;
    printf("n:");
    scanf("%d",&n);
    // 6 có ước 1,2,3,6 --> tổng ước số nhỏ hơn: 1 2 = 3 < 6
    // 14 có ước 1 2 7 14 --> tổng ước số nhỏ hơn 1 2 7 = 10<14
    // 30 có ước 1 2 3 5 6 10 15 30 --> tổng ước số nhỏ hơn: 1 2 3 5 6 10 = 27<30
    printf("Uoc so cua %d:",n);
     for(int i = 1;i<=n;i++){
        if(n%i == 0){// n chia hết cho i
            printf("%d ",i);   
        }
        if((n%i == 0)&&(tong+i< n)){
            tong+= i;
        }
    }
    printf("\ntong cac uoc so nho hon chinh no: %.2f",tong);
    return 0;
}