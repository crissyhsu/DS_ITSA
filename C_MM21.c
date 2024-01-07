#include<stdio.h>
int main(){
    long long n;
    while(scanf("%lld",&n)!=EOF){
        long long ans = 1;
        for(int i = 0 ; i < n ; i++){
            ans *= i+1;
        }
        printf("%lld\n",ans);
    }
    return 0;
}