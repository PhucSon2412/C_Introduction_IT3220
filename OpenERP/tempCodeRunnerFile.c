#include<stdio.h>
int main(){
    int n,condition=1,count=0;
    scanf("%i",&n);
    int A[n][2];
    while(scanf(" (%d,%d)",&A[count][0],&A[count][1])==2){
        count++;
    }
    if(count!=n){
        printf("0");
        return 1;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i][0]==A[j][0]&&A[i][1]==A[j][1]) {
                condition=0;
                break;
            }   
        }
        if(!condition) break;
    }
    printf("%i",condition);
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            printf("%i ",A[i][j]);
        }
        printf("\n");
    }
}