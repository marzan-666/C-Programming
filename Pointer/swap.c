#include<stdio.h>
void swap(int *a ,int *b){
    int temp;
   // a=&x,b=&y;

    temp=*b;
   *b=*a;
   *a=temp;
    //return swap;

}
int main(){
    int x=10,y=20;
    printf("before swap x=%d and y=%d\n",x,y);
    swap(&x,&y);
    printf("after swap x=%d and y=%d\n",x,y);
    return 0;
}
