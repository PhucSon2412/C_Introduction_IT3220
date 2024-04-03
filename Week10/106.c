#include<stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE];
    int i=0,j=0;
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("Enter a%i%i:",i+1,j+1);
            scanf("%i",&A[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("Enter b%i%i:",i+1,j+1);
            scanf("%i",&B[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            C[i][j]=A[i][0]*B[0][j]+A[i][1]*B[1][j]+A[i][2]*B[2][j];
        }
    }
    printf("%c%4i%4i%4i%4c   %c%4i%4i%4i%4c   %c%4i%4i%4i%4c\n",218,A[0][0],A[0][1],A[0][2],191,218,B[0][0],B[0][1],B[0][2],191,218,C[0][0],C[0][1],C[0][2],191);
    printf("%c%4i%4i%4i%4c X %c%4i%4i%4i%4c = %c%4i%4i%4i%4c\n",179,A[1][0],A[1][1],A[1][2],179,179,B[1][0],B[1][1],B[1][2],179,179,C[1][0],C[1][1],C[1][2],179);
    printf("%c%4i%4i%4i%4c   %c%4i%4i%4i%4c   %c%4i%4i%4i%4c\n",192,A[2][0],A[2][1],A[2][2],217,192,B[2][0],B[2][1],B[2][2],217,192,C[2][0],C[2][1],C[2][2],217);
}   