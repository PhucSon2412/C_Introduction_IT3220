#include<stdio.h>
int main(){
    char name[30];
    printf("Type your name: ");
    scanf("%[^\n]",name);
    printf("Your name is: %s",name);
}