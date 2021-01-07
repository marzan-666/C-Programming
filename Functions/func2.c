#include<stdio.h>
#include<math.h>


int sub(int a, int b){
    int result = a-b;
    return result;

}

int mul(int a, int b){
    int result = a*b;
    return result;

}

int add(int a, int b){
    int result = a+b;
    return result;

}

int div(int a, int b){
    int result = a/b;
    return result;

}

int main(){
    int x=10,y=5,l,m,n,o;
    l=sub(x,y);
    m=mul(x,y);
    n=add(x,y);
    o=div(x,y);

    printf("Subtraction: %d\n",l);
    printf("Multiplication: %d\n",m);
    printf("Addition: %d\n",n);
    printf("Division: %d\n",o);

    return 0;
}
