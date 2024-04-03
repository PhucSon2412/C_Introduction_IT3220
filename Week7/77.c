#include<stdio.h>
int main(){
    for (float i=0;i<=100;i++){
        printf("%.0f Celsius = %.1f Fahrenheit\n",i,1.8*i+32);
    }
}