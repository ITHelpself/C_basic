// tim uoc chung lon nhat cua 2 so
// 4 và 6
// ước của 4: 1 2 4
// ước của 6: 1 2 3 6
//--> ước chung lớn nhất 2
#include<stdio.h>
int main(){
    int a,b;
    printf("nhap 2 so a,b:");
    scanf("%d%d",&a,&b);
    if(a<b){// hoan vi
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i=b;i>=1;i--){
        if(a%i ==0 &b%i==0){
            printf("ucln cua %d va %d la %d",a,b,i);
            break;
        }
    }

    return 0;
}