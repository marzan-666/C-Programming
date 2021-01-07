#include<stdio.h>

int main(){
    int i,sum;
    for(i=1;i<=10;i++){
        sum=sum+(i/(i+1));
    }
    printf("%d\n",sum);
    return 0;
}

