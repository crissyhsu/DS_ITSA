#include<stdio.h>
int main(){
    int a[6];
    for(int i = 0 ; i < 6 ; i++){
        scanf("%d",&a[i]);
    }
    long long ans = 0;
    for(int i = 0 ; i < 6 ; i++){
        ans+=a[i]*a[i]*a[i];
    }
    printf("%lld\n",ans);
    return 0;
}