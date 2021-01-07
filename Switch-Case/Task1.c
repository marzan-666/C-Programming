#include<stdio.h>

int main(){

    int call;
    printf("Enter a number: \n");
    scanf("%d",&call);

    switch(call) {

    case 0:
        printf("Waiting for operator\n");
        break;

    case 1:
        printf("Checking bank balance\n");
        break;

    case 2:
        printf("Looking into credit card details\n");
        break;

    default:
        printf("Unknown operator\n");
        break;
    }
    return 0;
}
