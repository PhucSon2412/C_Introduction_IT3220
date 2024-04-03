#include<stdio.h>
int main(){
    int n,odd=0,even=0;
    printf("Enter n:");
    scanf("%i",&n); 
    while(n!=0){
        if(n%2==0) even++;
        else odd++;
        n/=10;
    }
    printf("Odd number:%i,Even number:%i",odd,even);
}