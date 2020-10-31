// số hoàn thiện là số mà tổng các ước số bé hơn nó bằng với nó
// 6 có ước số nhỏ hơn 1 2 3. tổng = 6--> 6 là số hoafnt hiện
#include<stdio.h>
int main(){
    int n;
    int S = 0;// can khoi gan gia tri cua S
    printf("n:");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            S+=i;
        }
    }
    if(n==S){
        printf("%d la so hoan thien",n);
    }
    else{
        printf("%d khong phai la so hoan thien",n);
    }
    return 0;
}