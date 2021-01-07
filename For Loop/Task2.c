
// 2. Add up 1/2-2/3+3/4 …. (up to n/n+1 numbers, n is given by user)

#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Enter a positive number:\n");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        if (i%2==0)
            sum= sum-((1.0)*i/(i+1));
        else
            sum= sum+((1.0)*i/(i+1));
    }
    printf("\nSum of the Series up to n Numbers: %f\n",sum);
    return 0;
}
