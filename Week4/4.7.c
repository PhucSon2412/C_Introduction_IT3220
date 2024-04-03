#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    int quantity;
    int isbn;
    char title[15];
    int price;
    int total;
    int finalpay;
    printf("What is the title: ");
    scanf("%[^\n]",title);
    printf("What is the ISBN: ");
    scanf("%i",&isbn);
    printf("How much it cost: ");
    scanf("%i",&price);
    printf("How many: ");
    scanf("%i",&quantity);
    total=price*quantity;
    finalpay=total*1.04;
    printf("%c",218);
    for(i=0;i<50;i++){
        printf("%c",196);
    }
    printf("%c\n",191);
    printf("%cBK Bookseller                                     %c\n",179,179);
    printf("%c                                                  %c\n",179,179);
    printf("%cQty  ISBN      Title          Price     Total     %c\n",179,179);
    printf("%c%-5i%-10i%-15s%-10i%-10i%c\n",179,quantity,isbn,title,price,total,179);
    printf("%cVAT: 4%%                                           %c\n",179,179);
    printf("%cYou pay: %-41i%c\n",179,finalpay,179);
    printf("%c",192);
    for(i=0;i<50;i++){
        printf("%c",196);
    }
    printf("%c\n",217);
    system("pause");
}