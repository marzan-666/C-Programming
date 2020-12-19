#include<stdio.h>

int main(){
    int x,y,i,GCD=1;
    printf("Enter 2 numbers: \n");
    scanf("%d %d",&x,&y);

    for(i=1;i<=x;i++){
        if((x%i==0)&&(y%i==0))
            GCD=i;
    }
    printf("GCD is = %d ",GCD);
    return 0;
}
