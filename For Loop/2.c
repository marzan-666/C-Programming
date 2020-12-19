// 1*1/1! + 2*2/2! + 3*3/3!

#include<stdio.h>
#include<math.h>
int main(){
    int i;
    double sum=0, fact=1;

    for(i=1;i<=5;i++){
        fact=fact*i;
        sum=sum+((pow(i,i))/fact);
    }
    printf("%.2lf",sum);
    return 0;
}
