#include <stdio.h>
int main(void)
{
    int data; //variable to store data
    /*Get input from the user*/
    printf("\n Enter any number: = ");
    scanf("%d", &data);
    /* Check LSB bit of the number */
    if(data & 1)
    {
        printf("\n Number is Odd.\n\n");
    }
    else
    {
        printf("\n Number is Even.\n\n");
    }
    return 0;

}
