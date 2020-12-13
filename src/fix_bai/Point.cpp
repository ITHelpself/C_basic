#include<stdio.h>
#include<math.h>
typedef struct Point{
    int x,y;
};
enum Compare{
    EQUAL, LESS, GREATER
};
void enterInfo(Point &input);
void setPoint(Point &point, int x, int y);
float findDistance(Point start, Point end);
Compare compareDistance(Point first, Point second, Point other);
void printInfo(Point output);
void printDistance(Point start, Point end);
void printPointNearOrigin(Point first, Point second);
void printPointNearHorizontal(Point first, Point second);// gần trục tung
void printPointNearVertical(Point first, Point second);// gần trục hoành
int main(){
    Point start, end;
    enterInfo(start);
    printInfo(start);
    enterInfo(end);
    printInfo(end);
    // printDistance(start, end);
    printPointNearOrigin(start, end);
    printPointNearHorizontal(start, end);
}
void enterInfo(Point &input){
    printf("\nx: ");
    scanf("%d",&input.x);
    printf("y: ");
    scanf("%d",&input.y);
}
void setPoint(Point &point, int x, int y){
    point.x = x;
    point.y = y;
}
void printInfo(Point output){
    printf("(%d,%d)",output.x,output.y);
}
void printDistance(Point start, Point end){
    // TODO: tim khoang cach
    float distance = findDistance(start,end);
    printf("\nDistance is: %.2f",distance);
}
float findDistance(Point start, Point end){
    return sqrt(pow((start.x - end.x),2)+pow((start.y - end.y),2));
}
Compare compareDistance(Point first, Point second, Point other){
    Compare compare = LESS;
    float firstdistance = findDistance(first,other);
    float seconddistance = findDistance(second,other);
    if(firstdistance == seconddistance){
        compare = EQUAL;
    }
    else if(firstdistance > seconddistance){
        compare = GREATER;
    }
    return compare;
}
void printPointNearOrigin(Point first, Point second){
    Point origin;
    setPoint(origin,0,0);
    Compare compare = compareDistance(first,second,origin);
    printf("\n");
    if(compare == GREATER){
        printf("point 2 near origin point 1!");
    }
    else if(compare == EQUAL){
        printf("point 1 and point 2 same close origin ");
    }
    else{
        printf("point 1 near than point 2!");
    }
}
void printPointNearHorizontal(Point first, Point second){
    Point firstfootofhighroad;// chan duong cao cua diem 1
    Point secondfootofhighroad;// chan duong cao cua diem 2
    setPoint(first,first.x,0);
    setPoint(second,second.x,0);
    float firstdistance = findDistance(first,firstfootofhighroad);
    float seconddistance = findDistance(second,secondfootofhighroad);
    printf("\n");
    if(firstdistance>seconddistance){
        printf("point 2 near horizontal than point 1");
    } 
    else if(firstdistance<seconddistance){
        printf("point 1 near horizontal than point 2");
    }
    else{
        printf("point 1 and point 2 same close horizontal");
    }
}
void printPointNearVertical(Point first, Point second){
    Point firstfootofhighroad;// chan duong cao cua diem 1
    Point secondfootofhighroad;// chan duong cao cua diem 2
    setPoint(first,0,first.y);
    setPoint(second,0,second.y);
    float firstdistance = findDistance(first,firstfootofhighroad);
    float seconddistance = findDistance(second,secondfootofhighroad);
    printf("\n");
    if(firstdistance>seconddistance){
        printf("point 2 near vertical than point 1");
    } 
    else if(firstdistance<seconddistance){
        printf("point 1 near vertical than point 2");
    }
    else{
        printf("point 1 and point 2 same close vertical");
    }   
}
