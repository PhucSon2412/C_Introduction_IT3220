#include<stdio.h>
#include<stdbool.h>
int main(){
    bool Prime;
    for (int i=2;i<=100;i++){
        Prime=true;
        for (int j=2;j<=i/2;j++){
            if(i%j == 0) {
                Prime=false;
                break;
            }
        }   
    if (Prime == true){
    printf("%i\n",i);
    }
    }
}