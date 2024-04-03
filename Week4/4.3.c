#include<stdio.h>
int main(){
    char a[30];
    printf("Type anything: ");
    scanf("%[^\n]",a);
    printf("You type : %s",a);
}   