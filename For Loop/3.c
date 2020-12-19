//(1*3)+(3*5) +(5*7).....

#include<stdio.h>

int main(){
    int i,sum=0;
    for(i=1;i<10;i=i+2){
        sum=sum+(i*(i+2));
    }
    printf("%d",sum);
    return 0;
}
