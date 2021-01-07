#include<stdio.h>

struct student{
    char name[100];
    int id;
    char dept[100];
};

int main(){
    struct student s;

    printf("Enter your name: \n");
    //scanf("%s",&s.name);
    gets(s.name);
    printf("Enter your ID: \n");
    scanf("%d",&s.id);

    printf("Enter your Department: \n");
    scanf("%s",s.dept);
    //gets(s.dept);

    printf("Student name: %s\n",s.name);
    printf("ID: %d\n",s.id);
    printf("Department: %s\n",s.dept);


    /*s.id=1234;
    strcpy(s.name,"Albert");
    strcpy(s.dept,"English");

    printf("Student name: %s\n",s.name);
    printf("ID: %d\n",s.id);
    printf("Department: %s\n",s.dept);
    */

    return 0;
}

