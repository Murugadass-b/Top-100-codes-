#include <stdio.h>
void main(){
    long long x;
    scanf("%lld",&x);
    printf(((x&1)==1)?"ODD":"EVEN");
}