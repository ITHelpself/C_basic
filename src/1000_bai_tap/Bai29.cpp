//Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
//tích số nguyên lẻ
 #include<stdio.h>
int main(){
    int n;
    printf("n:");
    scanf("%d",&n);
    // 6 có ước số là 1,2,3, 6
    // 7 có ước số là 1,7
    // 8 có ước số là 1,2,4,8
    // --> ước số là số mà n chia hết
    printf("Ước số lẻ lon nhat của %d: ",n);
    for(int i = n;i>=1;i--){
        if(n%i == 0 && i%2==1){// n chia hết cho i va i la so le
            printf("%d ",i);
            break;
        }
    }
    return 0;
}