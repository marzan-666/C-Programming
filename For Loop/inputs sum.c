#include<stdio.h>

int main(){
    int i,n,digit,sum=0;
    scanf("%d",&n);
    for(i=n;i>=0;i--){
        digit=n%10;
        n=n/10;
        sum=sum+digit;
    }
    printf("%d",sum);
    return 0;
}
