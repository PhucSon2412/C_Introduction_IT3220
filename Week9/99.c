#include<stdio.h>
void isLeapYear(int year){
    int LeapYear=0;
    if(year%4==0){
        if(year%100==0&&year%400==0) LeapYear=1;
        else if(year%100==0&&year%400!=0) LeapYear=0;
        else LeapYear=1;
    } else LeapYear=0;
    if(LeapYear) printf("%i is a leap year",year);
    else printf("%i is not a leap year",year);
}
int main(){
    int year;
    printf("Enter year:");
    scanf("%i",&year);
    isLeapYear(year);
}