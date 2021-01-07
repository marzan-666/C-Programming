#include<stdio.h>
void triangle()
{

    printf("\t     *  \n");
    printf("\t    * * \n");
    printf("\t   *   * \n");
    printf("\t  *     * \n");
    printf("\t *       * \n");
    printf("\t*********** \n");
}
void square()
{
    printf("\t|         | \n");
    printf("\t|         | \n");
    printf("\t|         | \n");
    printf("\t|         | \n");
    printf("\t|_________| \n");
}

int main()
{
   triangle();
   square();
   square();
   square();
   return 0;
}
