#include<stdio.h>
int reverse(int A[],int n){
    int t;
    for(int i=0;i<=n/2;i++){
        t=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=t;
    }
}
int main(){
    int n;
    printf("Enter number of digits:");
    scanf("%i",&n);
    int A[n];
    for(int i=0;i<n;i++) scanf("%i",&A[i]);
    reverse(A,n);
    for(int i=0;i<n;i++) printf("%i ",A[i]);
}
