#include<stdio.h>
void shuffle(int *a ,int *b,int *c, int *d, int *e){
    int temp,temp1,temp2,temp3;
   // a=&x,b=&y;

    temp=*b;
    temp1=*a;
    temp2=*c;
    temp3=*d;
    *a=*e;
    *b=temp3;
    *c=temp2;
    *d=temp;
    *e=temp1;
    //return swap;

}
int main(){
    int v=3,w=5,x=10,y=20,z=30;
    printf("before swap v=%d , w=%d , x=%d , y=%d and z=%d \n",v,w,x,y,z);
    shuffle(&v,&w,&x,&y,&z);
    printf("after swap v=%d, w=%d , x=%d , y=%d and z=%d\n",v,w,x,y,z);
    return 0;
}


