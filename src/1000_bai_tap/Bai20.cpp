// Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
#include<stdio.h>
int main(){
    int n;
    printf("n: ");
    scanf("%d",&n);
    // uoc so cua 6: 1 2 3 6
    // uoc so cua 14: 1 2 7 14
    //uoc so cua 28: 1 2 4 7 14 28
    // uoc so của n là số mà n chia hết
    printf("uoc so cua %d: ",n);
    for(int i = 1; i<= n; i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}