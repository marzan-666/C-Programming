#include<stdio.h>

int main(){
    int a,b,c;

    printf("enter first number: \n");
    scanf("%d",&a);
    printf("enter second number: \n");
    scanf("%d",&b);
    printf("enter third number: \n");
    scanf("%d",&c);


    if(a>b && a>c)
        printf("YES! %d is the largest number. . .\n",a);
    else if (b>c && b>a)
        printf("YES! %d is the largest number. . .\n",b);
    else
        printf("YES! %d is the largest number. . .\n",c);

    return 0;


}
