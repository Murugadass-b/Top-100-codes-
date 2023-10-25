#include<stdio.h>
void main(){
    int n,sum=0;
    scanf("%d",&n);
    //method 1
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    //method 2 using formula
    sum = (n*(n+1))/2;


    printf("%d",sum);
}