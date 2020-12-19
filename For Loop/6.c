// Sum of the series 1 / 1 + (1 + 2) / (1 * 2) + (1 + 2 + 3) / (1 * 2 * 3)+........ n

#include<stdio.h>
int main(){
    int i;
    double sum1=0,sum=0,prod=1;
    for(i=1;i<=3;i++){
        sum1=sum1+i;
        prod=prod*i;
        sum=sum+(sum1/prod);
    }
    printf("%.2lf",sum);
    return 0;
}
