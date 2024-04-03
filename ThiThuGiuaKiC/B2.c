#include<stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    if(n>=1&&n<=999){
    int i=100;
    for(i;i<=999;i++){
        if(i%n==0) printf("%i ",i);
    }
    }
}