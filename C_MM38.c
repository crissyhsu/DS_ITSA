#include<stdio.h>
int main(){
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        if(a+b<=c || a+c <= b || b+c <= a){
            printf("unfit\n");
        }
        else{
            printf("fit\n");
        }
    }
    return 0;
}