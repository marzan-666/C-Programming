#include<stdio.h>
/*int findReverse(int n)
{
   int rev=0,r;
   for(n=n;n>0;){
       r=n%10;
       rev=(rev*10)+r;
       n=n/10;
   }
   return rev;
}

int main()
{
   int num, reverse;

   printf("Enter a positive interger: ");
   scanf("%d", &num);

   reverse = findReverse(num);

   printf("The reverse of %d is: %d", num, reverse);

   return 0;
}
*/

int main(){
    int n,r,rev=0;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("reverse is %d ",rev);
    return 0;

}





















