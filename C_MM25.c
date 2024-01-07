#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int ans = 0;
        int m = n/3;
        for(int i = 0 ; i < m ; i++){
            int temp = 3*(i+1);
            
            ans+=temp;
        }
        printf("%d\n",ans);
    }
    return 0;
}