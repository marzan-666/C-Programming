// (1/1) + (2/1+2) + (3/1+2+3)

#include<stdio.h>

int main(){
    int i,n;
    double sum1=0, sum=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum1=sum1+i;
        sum=sum+(i/sum1);
    }
    printf("%.2lf",sum);
    return 0;
}
