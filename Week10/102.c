#include<stdio.h>
int main(){
    int n,total=0;
    printf("Enter number of digits:");
    scanf("%i",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%i",&a[i]);
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]) total+=a[i]; 
    }
    printf("Sum of the local maximum numbers:%i",total);
}