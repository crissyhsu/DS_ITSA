#include<stdio.h>
#include<stdlib.h>

int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld days\n",n/86400);
    n%=86400;
    printf("%lld hours\n",n/3600);
    n%=3600;
    printf("%lld minutes\n",n/60);
    n%=60;
    printf("%lld seconds\n",n);
    return 0;
}