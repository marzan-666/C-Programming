

// 4. 1/(1+2)^2 + 2/(2+3)^2 + 3/(3+4)^2 …. Up to nth term, n is given by user


#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Enter a positive number:\n");
    scanf("%d",&n);

    for (i=1s;i<=n;i++)
    {
        sum= sum+((1.0)*i/pow((i+(i+1)),2));

    }
    printf("\nSum of the series up n Numbers: %f\n",sum);
    return 0;
}
