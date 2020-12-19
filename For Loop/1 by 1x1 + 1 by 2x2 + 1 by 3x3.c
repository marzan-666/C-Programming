//1/(1*1) + 1/(2*2) + 1/(3*3) . . .

#include<stdio.h>
/*
int main(){
    int i;
    double sum=0;
    for(i=1;i<=5;i++){
        sum=sum+(1.0/(i*i));
    }
    printf("%.2lf",sum);
    return 0;
}
*/


//1/(1*1) - 1/(2*2) + 1/(3*3) - 1/(4*4) . . .
int main(){
    int i, sign=-1;
    double sum=0;
    for(i=1;i<=5;i++){
        sign = -sign;
        sum=sum+(1.0/(i*i)*sign);
    }
    printf("%.2lf",sum);
    return 0;
}
