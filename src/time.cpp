#include<stdio.h>
#include<math.h>
typedef struct Date
{
    int d,m,y;
};
//declare function
void input(Date &date);
void output(Date date1, Date date2);
void outputLeapYear(Date date1); 
void outputBeforeday(Date date1);
void outputNextday(Date date1);
void outputPositionDayinYear (Date date1);
void outputDistanceBetweenTwoDays(Date date1, Date date2);
bool isLeapYear(Date date1);
int getDifference(Date date1, Date date2);
int countLeapYears(Date d);
// drive function
int main(){
    Date date1, date2;
    input(date1);
    input(date2);
    output(date1, date2);
    outputLeapYear(date1);
    outputBeforeday(date1);
    outputNextday(date1);
    outputPositionDayinYear (date1);
    outputDistanceBetweenTwoDays(date1,date2);
    return 0;
}
//output date/month/year
void input(Date &date){
    printf("\nenter date: ");
    scanf("%d", &date.d);
    printf("\nenter month: ");
    scanf("%d", &date.m);
    printf("\nenter year: ");
    scanf("%d", &date.y); 
}
void output(Date date1, Date date2){
    printf("\ntime 1: %d / %d / %d \n", date1.d, date1.m, date1.y);
    printf("\ntime 2:  %d / %d / %d \n", date2.d, date2.m, date2.y);
}
// ------------------------
//chech isLeapYear
bool isLeapYear(Date date1){
    if (date1.y % 400 == 0){
        return true;
    }
    if (date1.y% 4 == 0 && date1.y % 100 != 0){
        return true;
    } return false;
}
void outputLeapYear(Date date1){
    if(isLeapYear(date1.y)==true){
        printf("\n%d is a leap year of time 1", date1.y);
    } else {
        printf("\n%d is not a leap year of time 1", date1.y);
    }
}
// ---------------------
//find before day
void outputBeforeday(Date date1){
    if (date1.d == 1)
        switch (date1.m)
        {
        case 1:  printf("\nbefore day: 31/12/%d", date1.y -1);
                break;
        case 3: if ((isLeapYear(date1.y)))
            printf("\nbefore day: 29/2/%d", date1.y);
            break;
        
        case 4: case 6: case 9: case 11: case 2:
            printf("\nbefore day: 31/%d/%d", date1.m - 1, date1.y -1);
                break;
        default:
            printf("\nbefore day: 30/%d/%d", date1.d - 1, date1.m, date1.y);
            
        } else 
            printf("\nbefore day: %d/%d/%d", date1.d - 1, date1.m, date1.y);
        }
// find next day
void outputNextday(Date date1){
    if (date1.d == 31)
        switch (date1.m)
    {
    case 12: if (date1.d == 31)
        printf("\nnext day: 1/1/%d", date1.y + 1);
        break;
    case 2: if(((isLeapYear(date1.y)==true) && (date1.d == 29)) || (((isLeapYear(date1.y)==false) && (date1.d == 28))));
        printf("\nnext day: 1/3/%d", date1.y);
        break;
    case 4: case 6: case 9: case 11: if (date1.d == 30)
        printf("\nnext day: 1/%d/%d", date1.m+1, date1.y);
        break;
    case 1: case 3: case 5: case 7: case 8: case 10:
        if(date1.d == 31)
            printf("\nnext day: 1/%d/%d", date1.m+1, date1.y);
                break;
    default: 
        printf("\nnext day: %d/ %d /%d", date1.d+1, date1.m, date1.y);
        break; 
    }  else
            printf("\nnext day: %d/ %d /%d", date1.d+1, date1.m,date1.y);
    
}
void outputPositionDayinYear (Date date1){
    int n, position;
    n = 0;
    switch (date1.m)
    {

    case 12: n += 30;
    case 11: n += 31;
    case 10: n += 30;
    case 9: n += 31;
    case 8: n += 31;
    case 7: n += 30;
    case 6: n += 31;
    case 5: n += 30;
    case 4: n += 31;
    case 3: if (isLeapYear(date1.y))
                n += 29;
            else
            {
                n += 28;
            }
        case 2: n += 31;
        case 1: n =n;
    }
    position = n + (date1.d);
    printf("\npositon %d of year: ", position); 
    }

//  ------------------------   
// To store number of days in 
// all months from January to Dec.
const int monthDays[12] = {
    31, 28, 31, 30, 31, 30, 
    31, 31, 30, 31, 30, 31
};
// This function counts number of 
// leap years before the given date
int countLeapYears(Date d){
    int years = d.y;
    //check if the current year needs to be
    // considered for the count of leap years
    if (d.m <= 2){
        years--;
    }
    //an year is a leap year if it
    //is a multiple of 4;
    //multiple of 400 and not a
    //multiple of 100
    return years/4 - years/100 + years/400;
}
int getDifference(Date date1, Date date2){
    //count total number of days
    //before first date 'date1'
    //initialize count using years and day
    long int n1 = date1.y* + date1.d;
    long int n2;
    //add days for months in given date
    for (int i = 0; i < date2.m - 1; i++){
        n2 += monthDays[i];
        n2 += countLeapYears(date2);
    }
    return (n2 - n1);
}

void outputDistanceBetweenTwoDays(Date date1, Date date2){
    int gap_of_two_day = getDifference(date1, date2);
    printf("\nthe gap between two day %d", gap_of_two_day);
}
