#include<stdio.h>
int main(){
    int a;
    int b[8];
    while(scanf("%d",&a)!=EOF){
        int is_neg = 0;
        if(a<0){
            is_neg = 1;
            a=~a;
        }
        for(int i = 0 ; i < 8 ; i++){
            b[i] = a%2;
            a/=2;
        }
        if(is_neg == 1){
            for(int i = 0 ; i < 8 ; i++){
                if(b[i]==0) b[i] = 1;
                else b[i] = 0;
            }
        }
        for(int i = 0 ; i < 8 ; i++){
            printf("%d",b[7-i]);
        }
        printf("\n");
    }   
    return 0;
}