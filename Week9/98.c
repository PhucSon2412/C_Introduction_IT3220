#include<stdio.h>
void getJudgeData(int *a,int *b,int *c,int *d,int *e){
    scanf("%i %i %i %i %i",&*a,&*b,&*c,&*d,&*e);
}
void calcScore(int a,int b,int c,int d,int e,float *g){
    int t,f[5];
    f[0]=a;f[1]=b;f[2]=c;f[3]=d;f[4]=e;
    for(int i=0;i<5;i++){
        for(int j=0;j<4-i;j++){
            if(f[j]>f[j+1]){
                t=f[j];
                f[j]=f[j+1];
                f[j+1]=t;
            }
        }
    }
    *g=(float)(f[1]+f[2]+f[3])/3;
}
int main(){
    int a,b,c,d,e;
    float g;
    getJudgeData(&a,&b,&c,&d,&e);
    calcScore(a,b,c,d,e,&g);
    printf("Score:%.1f",g);
}