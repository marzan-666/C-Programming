#include<stdio.h>

struct zoo{
    char name[100];
    int age;
    char food[100];
};

int main(){
    struct zoo z;
    z.age=15;
    strcpy(z.name,"Monkey");
    strcpy(z.food,"Banana");

    printf("Animal name: %s\n",z.name);
    printf("Animal age: %d\n",z.age);
    printf("Animal food: %s\n",z.food);

    return 0;
}
