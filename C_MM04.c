#include<stdio.h>

int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld+%lld=%lld\n",a,b,a+b);
    printf("%lld*%lld=%lld\n",a,b,a*b);
    printf("%lld-%lld=%lld\n",a,b,a-b);
    if(a < 0 && b < 0){
        printf("%lld/%lld=%lld...%lld\n",a,b,a/b-1,a%b-b);
    }
    else if(a < 0){
        printf("%lld/%lld=%lld...%lld\n",a,b,a/b-1,a%b+b);
    }
    else{
        printf("%lld/%lld=%lld...%lld\n",a,b,a/b,a%b);
    }
    
    
    return 0;
}