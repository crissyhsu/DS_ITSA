#include<stdio.h>
#include<stdlib.h>

int main(){
    double distance;
    double v_1 = 1, v_2 = 2.54*30/100;
    double v_3 = v_1-v_2;
    while(scanf("%lf",&distance)!=EOF){
        double time = distance/v_3;
        int ans = time*10;
        if(ans%10 > 0){
            printf("%d\n",(ans/10)+1);
        }
        else{
            printf("%d\n",(ans/10));
        }
    }
    

    return 0;
}