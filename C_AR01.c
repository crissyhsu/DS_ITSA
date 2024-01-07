#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char input[1000000];
int main(){
    
    while(fgets(input,102,stdin)!=NULL){
        char *token[101];
        int tokenCount = 0;
        token[0] = strtok(input," \n");
        while(token[++tokenCount] = strtok(NULL," \n"));
        for(int i = 0 ; i < tokenCount ; i++){
            if(i!=0){
                printf(" ");
            }
            printf("%s",token[tokenCount-1-i]);
        }
        printf("\n");
    }
    return 0;
}