
// isPrime , PrimeTest

#include<stdio.h>
/*
int main(){
    int n,i=1,checker=0;
    printf("Enter a Positive number: \n");
    scanf("%d",&n);
    while(i<=n && n>0){
        if(n%i==0)
            checker++;
            i++;
    }

    if(checker==2)
        printf("It is a Prime Number....\n");
    else
        printf("It is not a Prime Number....\n");
    return 0;
}
*/

/*
int main(){
    int i,n,flag=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Prime number. . . \n");
    else
        printf("Non Prime number. . .\n");
    return 0;
}
*/

int isPrime(int x){
    int i;
    for(i=2;i<x;i++){
        if(x%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if(isPrime(n)==0)
        printf("%d is a Prime number . . .\n",n);
    else
        printf("%d is not a Prime number. . .\n",n);

    return 0;
}









