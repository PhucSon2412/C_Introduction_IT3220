#include<stdio.h>
int main(){
    char c;
    while((c=getchar())!=EOF){
        if(97<=c&&122>=c){
            c=c-32;
        }
        putchar(c);
    }
}