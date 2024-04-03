#include<stdio.h>
int check(int a[],int b[],int n){
    int count=0;
    for(int i=0;i<n;i++) if(a[i]==b[i]) count++;
    return count;
}
int main(){
    int n;
    printf("Enter number of digits:");
    scanf("%i",&n);
    int a[n],b[n];
    printf("Enter first array:\n");
    for(int i=0;i<n;i++) scanf("%i",&a[i]);
    printf("Enter second array:\n");
    for(int i=0;i<n;i++) scanf("%i",&b[i]);
    if(check(a,b,n)==n) printf("1(Equal)");
    else printf("0(Not Equal)");
}