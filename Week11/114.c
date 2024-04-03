#include<stdio.h>
int swap(int *a,int *b,int *c){
    int t;
    t=*b;
    *b=*c;
    *c=t;
    t=*c;
    *c=*a;
    *a=t;
}
int main(){
    int a,b,c;
    printf("Enter a b c:");
    scanf("%i %i %i",&a,&b,&c);
    swap(&a,&b,&c);
    printf("%i %i %i",a,b,c);
}