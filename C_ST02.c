#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[260];
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%s",a);
        int length = strlen(a);
        for(int j = 0 ; j < length ; j++){
            printf("%c",a[length-1-j]);
        }
        printf("\n");
    }
    return 0;
}