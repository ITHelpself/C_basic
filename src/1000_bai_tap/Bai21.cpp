//  Tính tổng tất cả các “ ước số” của số nguyên dương n
#include<stdio.h>
int main(){
    int n;
    float tong = 0;
    printf("n:");
    scanf("%d",&n);
    // 6 có ước số là 1,2,3, 6
    // 7 có ước số là 1,7
    // 8 có ước số là 1,2,4,8
    // --> ước số là số mà n chia hết
    printf("Ước số của %d: ",n);
    for(int i = 1;i<=n;i++){
        if(n%i == 0){// n chia hết cho i
            printf("%d ",i);
            tong +=i;
        }
    }
    printf("\n tong: %.2f",tong);
    return 0;
}