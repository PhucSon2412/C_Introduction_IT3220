#include<stdio.h>
int main(){
    int i,n,m;
    printf("Enter n: ");
    scanf("%i",&i);
    n=i;
    m=i;
    for (n;n>1;n--){
        m=m*(n-1);
    }
    printf("%i!=%i",i,m);
}