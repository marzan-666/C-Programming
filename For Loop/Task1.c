


// 1. Add up 1-2+3-4+ …. (up to n numbers, n is given by user)

#include<stdio.h>

int main(){

    int i,n,result=0;
    printf("Enter a positive number:\n");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        if (i%2==0)
            result=result-i;

        else
            result=result+i;


    }
    printf("\nSum of the series up to n Numbers: %d\n",result);
    return 0;
}
