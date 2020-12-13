#include<stdio.h>
#define MAXSIZE 50
void enterData(int array[], int &size);
void printData(int array[], int size);
int main(){
    int array[MAXSIZE];
    int size;
    enterData(array,size);
    return 0;
}
void enterData(int array[], int &size){
    printf("\nenter data of array:");
    int temp;
    printf("size: ");
    scanf("%d", &size);
    // input elements
    for(int i = 0; i < size;i++){
        printf("a[%d]",i);
        scanf("%d",&temp);
        array[i] = temp;
    }
}
void printData(int array[], int size){
    printf("\nprint data of array:");
    for(int i = 0; i < size;i++){
        printf("%d ",array[i]);
    }
}