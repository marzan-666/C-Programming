// 1*2*3 + 2*3*4+ 3*4*5 + . . . + n*(n+1)*(n+2)

#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=3;i++){
        sum=sum+(i*(i+1)*(i+2));
    }
    printf("%d",sum);
    return 0;
}
