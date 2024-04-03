#include<stdio.h>
int main(){
    const float PI=3.14159265359;
    float dientichhinhtron;
    float chuviduongtron;
    float dientichmatcau;
    float thetichhinhcau;
    float r;
    printf("Nhap ban kinh: ");
    scanf("%f",&r);
    dientichhinhtron=PI*r*r;
    chuviduongtron=PI*2*r;
    dientichmatcau=4*PI*r*r;
    thetichhinhcau=PI*r*r*r*4/3;
    printf("Dien tich hinh tron la %g, chu vi duong tron la %g,dien tich mat cau la %g, the tich hinh cau la %g.",dientichhinhtron,chuviduongtron,dientichmatcau,thetichhinhcau);
}