#include<stdio.h>
struct book{
    char title[100];
    char author[100];
    int price;
};
int main(){
    struct book b;
    b.price=160;
    strcpy(b.title,"KOHEN KOBI KALIDAS");
    strcpy(b.author,"Humayun Ahmed");

    printf("Name: %s \n",b.title);
    printf("Author: %s \n",b.author);
    printf("Price: %d BDT \n",b.price);

    return 0;

}
