// 1*1 + 2*2 + 3*3 + . . . .

#include<stdio.h>
int main(){
    int i, sum=0;
    for(i=1;i<=5;i++){
        sum=sum+(i*i);
    }
    printf("%d",sum);
    return 0;
}
