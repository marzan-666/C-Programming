#include<stdio.h>
void shuffle(int *a ,int *b,int *c, int *d){
    int temp,temp1,temp2;
   // a=&x,b=&y;

    temp=*b;
    temp1=*a;
    temp2=*c;
    *a=*d;
    *b=temp2;
    *c=temp;
    *d=temp1;
    //return swap;

}
int main(){
    int w=5,x=10,y=20,z=30;
    printf("before swap w=%d , x=%d , y=%d and z=%d \n",w,x,y,z);
    shuffle(&w,&x,&y,&z);
    printf("after swap w=%d , x=%d , y=%d and z=%d\n",w,x,y,z);
    return 0;
}

