#include<stdio.h>
int gcd(int a,int b){
    int tmp;
    while(a%b!=0){
        tmp = b;
        b = a%b;
        a = tmp;
    }
    return b;
} 

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",gcd(a,b));
    return 0;
}