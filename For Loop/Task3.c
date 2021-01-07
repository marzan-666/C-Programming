
// 3. Add up 1/(1+2)+2/(2+3)+3/(3+4) …. Up to nth term, n is given by user


#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Enter a positive number:\n");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        sum = sum+((1.0)*i/(i+(i+1)));
    }
    printf("\nSum of the series up to n Numbers: %.2lf\n",sum);
    return 0;
}
