#include<stdio.h>
int main(){
    int min;
    int max;
    int i;
    int total=0;
    printf("Enter first integer number: ");
    scanf("%d",&min);
    printf("Enter second integer number: ");
    scanf("%d",&max);
    for(i=min;i<=max;i++){
        total=total+i;
    }
    printf("Sum = %d",total);
}