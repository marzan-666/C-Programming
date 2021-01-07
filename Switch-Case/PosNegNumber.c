#include<stdio.h>

int main(){

    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);

    switch(num>0){
    case 1:
        printf("Positive. . \n");
        break;
    case 0:
        switch(num<0){
        case 1:
        printf("Negative. . .\n");
        break;
        case 0:
        printf("Zero. . \n");
        break;
        }
    }
    return 0;

}
