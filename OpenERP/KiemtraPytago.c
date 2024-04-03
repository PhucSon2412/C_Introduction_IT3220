#include<stdio.h>
int main(){
    int a,b,c,temp;
    scanf("%i %i %i",&a,&b,&c);
    if (a>b){
        temp=a;
        a=b;
        b=temp;
        if (b>c){
            temp=b;
            b=c;
            c=temp;
        } 
    }
    if (a==b){
        if (b>c){
            temp=b;
            b=c;
            c=temp;
        }
    }
    if (a<b){
        if (b>c){
            temp=b;
            b=c;
            c=temp;
        }
    }
    if(a*a+b*b==c*c) printf("1");
    else printf("0");
}