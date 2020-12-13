#include<stdio.h>
typedef struct Point{
    int x,y;
};
void enterInfo(Point &input);
void printInfo(Point output);
int main(){
    Point start, end;
    enterInfo(start);
    printInfo(start);
    enterInfo(end);
    printInfo(end);
}
void enterInfo(Point &input){
    printf("\nx: ");
    scanf("%d",&input.x);
    printf("y: ");
    scanf("%d",&input.y);
}
void printInfo(Point output){
    printf("(%d,%d)",output.x,output.y);
}