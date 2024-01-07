#include<stdio.h>
int main(){
    double C_tem,F_tem;
    while(scanf("%lf",&C_tem)!=EOF){
        F_tem = C_tem*9/5+32;
        printf("%.1lf\n",F_tem);
        
    }
    return 0;
}