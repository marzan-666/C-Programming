#include<stdio.h>

struct Employee{
    char name[100];
    int id;
    double salary;
};
int main(){
    struct Employee e;
    e.id=1943;
    e.salary=2590.99;
    strcpy(e.name,"Rober De Niro");
    printf("Employee Name: %s\n",e.name);
    printf("ID: %d\n",e.id);
    printf("Salary: %.2lf $\n",e.salary);

    return 0;
}
