#include<stdio.h>
int main(){
    int day;
    int month;
    int year;
    printf("Nhap ngay thang nam sinh cua ban: ");
    scanf("%2i%*c%2i%*c%4i",&day,&month,&year);
    printf("Ngay thang nam sinh cua ban la: %i-%i-%i.",day,month,year);
}