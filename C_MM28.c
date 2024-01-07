#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int check = 0;
        for(int i = 1 ; i <=n ; i++){
            
            if(i%5 == 0 && i%7 == 0){
                if(check != 0)    printf(" ");
                check =1;
                printf("%d",i);
            }
        }
        printf("\n");
    }
    return 0;
}