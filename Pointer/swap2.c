#include<stdio.h>
void shuffle(int *a ,int *b,int *c){
    int temp,temp1;
   // a=&x,b=&y;

    temp=*b;
    temp1=*a;
    *a=*c;
    *b=temp1;
    *c=temp;
    //return swap;

}
int main(){
    int x=10,y=20,z=30;
    printf("before swap x=%d , y=%d and z=%d \n",x,y,z);
    shuffle(&x,&y,&z);
    printf("after swap x=%d , y=%d and z=%d\n",x,y,z);
    return 0;
}
