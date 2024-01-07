#include<stdio.h>
int main(){
    int month;
    while(scanf("%d",&month)!=EOF){
        if(month <= 2 || month == 12){
            printf("Winter\n");
        }
        else if(month >= 3 && month <= 5){
            printf("Spring\n");
        }
        else if(month >= 6 && month <= 8){
            printf("Summer\n");
        }
        else{
            printf("Autumn\n");
        }
    }
    return 0;
}