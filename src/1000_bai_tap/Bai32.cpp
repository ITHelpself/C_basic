// so chinh phuong
// binh phuong cua 3 la 9 --> 9 la so chinh phuong
// binh phuong cua 4 la 16--> 16 la so chinh phuong
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("n:");
    scanf("%d",&n);
    if(sqrt(n)==(int)sqrt(n)){
        printf("%d la so chinh phuong",n);
    }
    else{
        printf("%d khong la so chinh phuong",n);
    }
    return 0;
}