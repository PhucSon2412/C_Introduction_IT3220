#include<stdio.h>
int main(){
    int kwh;
    scanf("%i",&kwh);
    float old,recommend;
    if(kwh>=0&&kwh<=100) old=kwh*1728;
    else if(kwh>100&&kwh<=200) old=172800+(kwh-100)*2074;
    else if(kwh>200&&kwh<=400) old=380200+(kwh-200)*2612;
    else if(kwh>400&&kwh<=700) old=902600+(kwh-400)*3111;
    else if(kwh>700) old=1835900+(kwh-700)*3457;
    old=old*1.1;
    if(kwh>=0&&kwh<=50) recommend=kwh*1728;
    else if(kwh>50&&kwh<=100) recommend=86400+(kwh-50)*1786;
    else if(kwh>100&&kwh<=200) recommend=175700+(kwh-100)*2074;
    else if(kwh>200&&kwh<=300) recommend=383100+(kwh-200)*2612;
    else if(kwh>300&&kwh<=400) recommend=644300+(kwh-300)*2919;
    else if(kwh>400) recommend=936200+(kwh-400)*3015;
    recommend=recommend*1.1;
    printf("%.2f\n",old-recommend);
}