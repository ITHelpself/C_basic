#include <stdio.h>
typedef struct Date{
    int year, month, day;
};// định nghĩa kiểu Date
void enterInfo(Date &input);// nhạp vào thông tin
bool isValidDate(Date &checker);
bool isLeapYear(int year);
int main(){// viết main trước
    Date start,end;
    enterInfo(start);
    return 0;
}
void enterInfo(Date &input){
    do{
        printf("day: ");
        scanf("%d",&input.day);
        printf("month: ");
        scanf("%d",&input.month);
        printf("year: ");
        scanf("%d",&input.year);
        if(!isValidDate(input)){
            printf("enter again: \n");
        }
    } while(!isValidDate(input));
}
bool isValidDate(Date &checker){
    bool isvaliddate = true;
    // tìm trường hợp sai
    if(checker.month < 1 || checker.month > 12){
        isvaliddate = false;
    }
    else{
        if(checker.day<1){
            isvaliddate = false;
        }
        else{
            switch(checker.month){
                case 1: case 3: case 5: case 7: case 8: case 10:
                    if(checker.day < 1 || checker.day >31){
                        isvaliddate = false;
                    }
                    break;
                case 4: case 6: case 9: case 11:
                    if(checker.day < 1 || checker.day >30){
                        isvaliddate = false;
                    }
                    break;
                case 2: 
                    if(isLeapYear(checker.year)){
                        if(checker.day < 1 || checker.day >29){
                            isvaliddate = false;
                        }
                    }
                    else{
                        if(checker.day<1||checker.day >28){
                            isvaliddate = false;
                        }
                    }
            }
        }
    }
    return isvaliddate;   
}
bool isLeapYear(int year){
    return year % 4 == 0;
}