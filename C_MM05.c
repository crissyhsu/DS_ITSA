#include<stdio.h>
int main(){
    double a;
    while(scanf("%lf",&a)!=EOF){
        int b = a*a*100;
        if(b%10 > 4){
            if((b%100-b%10)/10+1 < 10){
                printf("%d.%d\n",b/100,(b%100-b%10)/10+1);
            }
            else{
                printf("%d.%d\n",b/100+1,((b%100-b%10)/10+1)%10);
            }
        }
        else{
            printf("%d.%d\n",b/100,(b%100-b%10)/10);
        }
    }
    
    return 0;
}