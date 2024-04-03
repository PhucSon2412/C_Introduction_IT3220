#include<stdio.h>
int main(){
    int n,symmetric=1;
    printf("Enter n:");
    scanf("%i",&n);
    int A[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter a%i%i:",i+1,j+1);
            scanf("%i",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i][j]!=A[j][i]) symmetric=0;
        }
        if(symmetric==0) break;
    }
    if(symmetric) printf("The matric is symmetric\n");
    else printf("The matric is not symmetric\n");
}