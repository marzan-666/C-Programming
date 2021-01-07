#include<stdio.h>

int main(){
    int n;
    printf("Enter a Positive number: \n");
    scanf("%d",&n);

    if(n%2==0)
        printf("%d is not a Prime number....\n",n);
    else
        printf("%d is a Prime number...\n",n);

    return 0;
}
