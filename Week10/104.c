#include<stdio.h>
int integers_element(int n[]){    
    int t;
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(n[j]<n[j+1]){
                t=n[j];
                n[j]=n[j+1];
                n[j+1]=t;
            }
        }
    }
    printf("Sorts the integers element by the decreasing: ");
    for(int i=0;i<10;i++) printf("%i ",n[i]);
}
int odd_element(int n[]){
    int t;
    for(int i=0;i<9;i++){
        if(n[i]%2==1){
            for(int j=i+1;j<10;j++){
                if(n[j]%2==1){
                    if(n[i]<n[j]){
                        t=n[i];
                        n[i]=n[j];
                        n[j]=t;
                    }
                }
            }
        }
    }
    printf("\nSort the odd elements by the decreasing: ");
    for(int i=0;i<10;i++) printf("%i ",n[i]);
}
int main(){
    int n[10],m[10];
    printf("Enter 10 intergers:\n");
    for(int i=0;i<10;i++){
        scanf("%i",&n[i]);
        m[i]=n[i];    
    }
    integers_element(n);
    odd_element(m);
}