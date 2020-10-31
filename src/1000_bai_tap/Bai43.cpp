//Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n
#include<stdio.h>
int main(){
    int n;
    int dem = 0;
    printf("nhap n:");
    scanf("%d",&n);
    int temp = n;
    while(temp!=0){
        dem++;
        temp/=10;
    }
    printf("so %d co %d chu so",n,dem);
    return 0;
}
