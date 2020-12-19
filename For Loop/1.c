// 1/1! + 2/2! + 3/3! ....

#include<stdio.h>
int main(){
    int i;
    double sum=0,fact=1;
    for(i=1;i<=10;i++){
        fact=fact*i;
        sum=sum+(i/fact);
    }
    printf("%.2lf",sum);
    return 0;

}
