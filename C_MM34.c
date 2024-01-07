#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int check = 0;
        for(int i = 1 ; i < n+1 ; i++){
            if(n%i == 0){
                if(check == 1)  printf(" ");
                check = 1;
                printf("%d",i);
            }
        }
        printf("\n");
    }
    return 0;
}