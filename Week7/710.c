#include<stdio.h>
int main(){
    int sum=0;
    for (int i=2;i<=100;i++){
        for (int j=1;j<i;j++){
            if (i%j ==0){
                sum=sum+j;
            }
        }
    if (i==sum){
        printf("%i\n",i);
    }
    }
}