// Bài 22:Tính tích tất cả các “ước số” của số nguyên dương n
#include<stdio.h>
int main(){
    int n;
    float tich = 1;
    printf("n:");
    scanf("%d",&n);
    // 6 có ước số là 1,2,3, 6
    // 7 có ước số là 1,7
    // 8 có ước số là 1,2,4,8
    // --> ước số là số mà n chia hết
    printf("uoc so cua %d: ",n);
    for(int i = 1;i<=n;i++){
        if(n%i == 0){// n chia hết cho i
            printf("%d ",i);
            tich*=i;
        }
    }
    printf("\ntich cac so la %.2f", tich);
    return 0;
}