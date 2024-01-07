#include<stdio.h>
#include<stdlib.h>

int main(){
    int start_h,start_m,end_h,end_m;
    scanf("%d%d%d%d",&start_h,&start_m,&end_h,&end_m);
    int total_time = (end_h-start_h)*60+(end_m-start_m);
    if(total_time <= 120){
        printf("%d\n",30*(total_time/30));
    }
    else if(total_time <= 240){
        printf("%d\n",120+((total_time-120)/30)*40);
    }
    else{
       printf("%d\n",120+160+((total_time-240)/30)*60);
    }
    return 0;
}