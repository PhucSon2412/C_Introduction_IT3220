#include<stdio.h>
int main(){
    int hour_default=40;
    int hour_real=50;
    int salary_default=25000;
    int salary_plus=40000;
    int hour_plus=hour_real-hour_default;
    printf("Tien luong = %i",hour_default*salary_default+hour_plus*salary_plus);
}