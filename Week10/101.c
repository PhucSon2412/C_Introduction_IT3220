#include<stdio.h>
int main(){
    int x[100],total=0,min;
    for(int i=0;i<100;i++) x[i]=100-i;
    for(int i=0;i<100;i++) if(x[i]%2==1) total+=x[i];
    printf("Sum of the odd number from 1 to 100:%i\n",total);
    for(int i=0;i<100;i++){
        if(x[i]>x[i+1]) min=x[i+1];
        else min=x[i];
    }
    printf("Min:%i",min);
}
