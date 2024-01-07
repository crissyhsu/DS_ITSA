#include<stdio.h>
int main(){
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        if(a > b){
            long long temp = a;
            a = b;
            b = temp;
        }
        long long ans = 0;
        for(int i = a ; i <= b ;i++){
            ans+=i;  
        }
        printf("%lld\n",ans);
    }
    return 0;
}