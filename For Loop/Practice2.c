#include<stdio.h>
#include<math.h>

/*
int main(){ // 1/1! +1/2! + 1/3!. . . . .
    int i;
    double sum=0,fact=1;
    for(i=1;i<=5;i++){
        fact=fact*i;
        sum=sum+(1.0/fact);
    }
    printf("%.2lf",sum);
    return 0;
}
*/
/*
int main(){ // 1/1! + 2/2! + 3/3!.....
    int i;
    double result= 0,sum=0, fact=1;
    for(i=1;i<=5;i++){
        //sum=sum+1;
        fact=fact*i;
        result=result+(i/fact);
    }
    printf("%.2lf",result);
    return 0;
}
*/
/*
int main(){  // 1/1! + 3/2! + 5/3!
    int i,n;
    double sum=0,fact=1;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            fact=fact*i;
            sum=sum+(((2*i)-1)/fact);
    }
    printf("%.2lf",sum);
    return 0;
}
*/
/*
int main(){ // 1/1 + 2/1+2 + 3/1+2+3
    int i;
    double sum1=0,sum=0;

    for(i=1;i<=5;i++){
        sum1=sum1+i;
        sum=sum+(i/sum1);
    }
    printf("%.2lf",sum);
    return 0;
}
*/

/*
int main(){ // 1-3+5-7+ . . . .
    int i,sign=-1,sum=0;
    for(i=1;i<10;i=i+2){
        sign=-sign;
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
*/
/*
int main(){ // 1/1 + 2/2*2 + 3/3*3+ ....
    int i;
    double prod, sum=0;
    for(i=1;i<=5;i++){
        prod = i*i;
        sum=sum+(i/prod);
    }
    printf("%.2lf",sum);
    return 0;
}
*/
/*
int main(){ // 1/1 + 2/2*2 + 3/3*3*3 + ......
    int i;
    double sum=0;
    for(i=1;i<=5;i++){
        sum=sum+(i/(pow(i,i)));
    }
    printf("%.2lf",sum);
    return 0;

}
*/
/*
int main(){ // 1/1 -2/2*2 + 3/3*3-......

    int i,n;
    double sum=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0)
            sum=(sum-(i*(1.0)/(i*i)));
        else
            sum=(sum+(i*(1.0)/(i*i)));
    }
    printf("%.2lf",sum);
    return 0;
}
*/
/*
int main(){ // 1/1 -1/2*2 + 1/3*3-......

    int i,n;
    double sum=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0)
            sum=(sum-((1.0)/(i*i)));
        else
            sum=(sum+((1.0)/(i*i)));
    }
    printf("%.2lf",sum);
    return 0;
}
*/
/*
int main(){ // 1-2+3-4+..... Hw(Task1)
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0)
            sum=sum-i;
        else
            sum=sum+i;
    }
    printf("%d",sum);
    return 0;

}
*/
/*
int main(){ // 1/2 - 2/3 + 3/4 -..... Hw(Task2)

    int i,n;
    double sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0)
            sum=sum-(i*(1.0)/(i+1));
        else
            sum=sum+(i*(1.0)/(i+1));
    }
    printf("%.2lf",sum);
    return 0;
}
*/
/*
int main(){ // 1/(1+2) + 2/(2+3) + 3/(3+4) +.....Hw(Task3)

    int i,n;
    double sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+((i*1.0)/(i+(i+1)));
    }
    printf("%.2lf",sum);
    return 0;
}
*/
/*
int main(){ // 1/(1+2)sq + 2/(2+3)sq + 3/(3+4)sq+..Hw(Task4)

    int i,n;
    double sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+((i*1.0))/pow((i+(i+1)),2);
    }
    printf("%.2lf",sum);
    return 0;
}
*/
/*
int main(){   // 1/(1+2)^2 + 2/(2+3)^3 + 3/(3+4)^4..Hw(Task5)
    int i,n;
    double sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+((i*1.0))/pow((i+(i+1)),(i+1));
    }
    printf("%.2lf",sum);
    return 0;
}
*/

















