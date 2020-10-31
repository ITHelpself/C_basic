// tim boi chung nho nhat
// 4 va 3 có các bội số chung: 12 24 36 ...
// --> bội số chung nhỏ nhất 12
// 12 và 6 cơ bội số chung: 12,24,...--> nhỏ nhất 12
#include<stdio.h>
int main(){
    // cách sử dụng công thức
    // ngoài ra còn có thể dùng một số cách khác
     int a,b;
     int ucln = 1;
     int bcnn = a*b;
    printf("nhap 2 so a,b:");
    scanf("%d%d",&a,&b);
    if(a<b){// hoan vi
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i=b;i>=1;i--){
        if(a%i ==0 &b%i==0){
            ucln = i;
            break;
        }
    }
    bcnn = (a*b)/ucln;
    printf("boi chung nho nhat cua %d va %d la %d",a,b,bcnn);
    return 0;
}