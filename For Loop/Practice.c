#include<stdio.h>

/*  GCD
int main(){
    int i,x,y,GCD=1;
    printf("Enter 2 Numbers: \n");
    scanf("%d %d",&x,&y);
    for (i=1;i<=x;i++){
           if((x%i==0)&&(y%i==0)){
               GCD=i;
    }
   }
   printf("%d",GCD);
   return 0;
}
*/
/* 1-3+5-......
int main(){
    int i ,sum=0,sign=-1;
    for(i=1;i<=100;i++){
        sign=-sign;
        sum=sum+(i*sign);
    }
    printf("%d",sum);
    return 0;
}
*/
/* 1/1 -1/2 +1//3 - ........
int main(){
    int i;
    double sum=0;
    for(i=1;i<=100;i++){
        if(i%2!=0)
            sum=sum+(1.0/i);
        else
            sum=sum-(1.0/i);
    }
    printf("%.2lf",sum);
    return 0;
}
*/
/* 1/1 + 1/2*2 + 1/3*3+.....
int main(){
    int i;
    double sum=0,prod=1;
    for(i=1;i<=5;i++){
        prod=(i*i);
        sum=sum+(1.0/prod);
    }
    printf("%.2lf",sum);
    return 0;
}
*/
/* 1/1 + 2/2*2 + 3/3*3+.......
int main(){
    int i;
    double sum=0,prod=1,sum1=0;
    for(i=1;i<=5;i++){
        sum1=sum1+1;
        prod=(i*i);
        sum=(sum+(sum1/prod));
    }
    printf("%.2lf",sum);
    return 0;

}
*/
/* 1+3+5+7+9.....
int main(){
    int i,sum=0;
    for (i=1;i<=10;i=i+2){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
*/
/*1/1-1/2+1/3- …. 1/100
int main(){
    int i;
    double sum=0;
    for(i=1;i<=5;i++){
       if(i%2!=0)
            sum=sum+(1.0/i);
        else
            sum=sum-(1.0/i);
    }
    printf("%.2lf",sum);
    return 0;
}
*/
/*
int fun(int x, int y){
    x=20;
    y=10;
}
int main(){
    int x=10, y=20;
    fun(x,y);
    printf("x= %d y= %d ",x,y);
    return 0;
}
*/

/*
void swap(int *p,int *q)
{
	//p=&n1 so p store the address of n1, so *p store the value of n1
	//q=&n2 so q store the address of n2, so *q store the value of n2

    int tmp;
    tmp = *p; // tmp store the value of n1
    *p=*q;    // *p store the value of *q that is value of n2
    *q=tmp;   // *q store the value of tmp that is the value of n1
}

int main()
{

    int n1,n2;
	printf("\n\n Function : swap two numbers using function :\n");
	printf("------------------------------------------------\n");
    printf("Input 1st number : ");
    scanf("%d",&n1);
    printf("Input 2nd number : ");
    scanf("%d",&n2);

    printf("Before swapping: n1 = %d, n2 = %d ",n1,n2);
	//pass the address of both variables to the function.
    swap(&n1,&n2);

    printf("\nAfter swapping: n1 = %d, n2 = %d \n\n",n1,n2);
    return 0;
}
*/





















