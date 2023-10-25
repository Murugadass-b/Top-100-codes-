#include<stdio.h>
void main(){
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    //method 1 TimeComplexity:O(n)
    // for(int i=a;i<=b;i++){
    //     sum+=i;
    // }

    //method 2
    sum = b*(b+1)/2-a*(a+1)/2+a;
    printf("%d",sum);

}