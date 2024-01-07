#include<stdio.h>
#include<stdlib.h>
int direct[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int main(){
    int n;
    int w,h;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        if(i!=0){
            printf("\n");
        }
        scanf("%d %d",&w,&h);
        int **map = (int**)malloc(w*sizeof(int*));
        for(int j = 0 ; j < h ; j++){
            map[j] = (int*)malloc(h*sizeof(int));
        }
        char **ans = (char**)malloc(w*sizeof(char*));
        for(int j = 0 ; j < h ; j++){
            ans[j] = (char*)malloc(h*sizeof(char));
        }

        for(int j = 0 ; j < w; j ++){
            for(int k = 0 ; k < h ; k++){
                scanf("%d",&map[j][k]);
            }
        }
        int check;
        for(int j = 0 ; j < w; j ++){
            for(int k = 0 ; k < h ; k++){
                check = 0;
                for(int l = 0 ; l < 4 ; l++){
                    if(j+direct[l][0] >= 0 && k+direct[l][1] >= 0){
                        if(map[j][k]==1 && map[j+direct[l][0]][k+direct[l][1]]==0){
                            check = 1;
                            ans[j][k]='0';
                            break;
                        }
                    }
                }
                if(check == 0){
                    ans[j][k] = '_';
                }  
            }
        }

        for(int j = 0 ; j < w ; j ++){
            for(int k = 0 ; k < h ; k++){
                printf("%c ",ans[j][k]);
            }
            printf("\n");
        }

    }
    return 0;
}