#include<stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%i",&n);
    do {
        printf("%i\n",n);
        n--;
    } while(n>0);
}
