#include<stdio.h>

int main(){
    int num;
    printf("Enter a number to check: \n");
    scanf("%d",&num);
    switch(num%2){
    case 0:
        printf("Number is Even. . \n");
        break;

    default:
        printf("Number is Odd . . \n");
        break;

    }
    return 0;
}
