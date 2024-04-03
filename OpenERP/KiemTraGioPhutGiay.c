#include<stdio.h>
int main(){
    unsigned int a,b,c,d=0,e=0,f=0;
    scanf("%i:%i:%i",&a,&b,&c);
    if (0<=a&&a<24) d=1;
    if (0<=b&&b<60) e=1;
    if (0<=c&&c<60) f=1;
    if (d==1&&e==1&&f==1) printf("1");
    else printf("0");
}