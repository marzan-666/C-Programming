#include<stdio.h>

int main(){

    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch);

    switch(ch){

    case 'R':
    case 'r':
        printf("Rickshaw\n");
        break;

    case 'C':
    case 'c':
        printf("CNG\n");
        break;

    case 'M':
    case 'm':
        printf("MotorCycle\n");
        break;

    case 'B':
    case 'b':
        printf("Bus\n");
        break;

    case 'P':
    case 'p':
        printf("Personal Vehicle\n");
        break;

    default:
        printf("not sure\n");
        break;
    }

    return 0;
}
