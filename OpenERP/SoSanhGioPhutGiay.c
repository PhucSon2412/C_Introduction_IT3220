#include<stdio.h>
int check(int a,int b,int c){
    int d=0,e=0,f=0;
    if (0<=a&&a<24) d=1;
    if (0<=b&&b<60) e=1;
    if (0<=c&&c<60) f=1;
    if (d==1&&e==1&&f==1) return 1;
    else return 0;
}
int main(){
    unsigned int a,b,c,d,e,f;
    scanf("%i:%i:%i",&a,&b,&c);
    scanf("%i:%i:%i",&d,&e,&f);
    if (check(a,b,c)&&check(d,e,f)){
        if(a>d) printf("1");
        else if(a<d) printf("-1");
        else if(a==d){
            if(b>e) printf("1");
            else if(b<e) printf("-1");
            else if(b==e){
                if(c>f) printf("1");
                else if(c<f) printf("-1");
                else if(c==f) printf("0");
            }
        }
    } else printf("00:00:00");
}