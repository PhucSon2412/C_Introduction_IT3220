#include<stdio.h>
int a(int A[],int n){
    int count=0;
    for(int i=0;i<n;i++) if(A[i]==0) count++;
    return count;
}
int b(int A[],int n){
    int B[n],zero=0,max=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            zero++;
        } else zero=0;
        B[i]=zero;
    }
    for(int i=0;i<n;i++) if(max<B[i]) max=B[i];
    return max;
}
int c(int A[],int n){
    printf("Time of appearance of numbers : ");
    for(int i=0;i<n;i++){
        if(A[i]==0) printf("%i ",i);
    }
}
int main(){
    int n;
    printf("Enter number of digits:");
    scanf("%i",&n);
    int A[n];
    printf("Enter %i number:\n",n);
    for(int i=0;i<n;i++) scanf("%i",&A[i]);
    printf("Number of the number 0 : %i\n",a(A,n));
    printf("Longest subsequence that consists the numbers 0 : %i\n",b(A,n));
    c(A,n);
}