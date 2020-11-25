#include<stdio.h>

int main(){
    int x;
    printf("Enter the Roll number of a Student: ");
    scanf("%d",&x);
    if(x==1)
        printf("Name : Md. Marjan\nID : 1621396042\nDepartment : ECE\nMajor : CSE\nNorth South University\n\n\n");
    else if(x==2)
        printf("Name : OSHIN MUMTAHA\nID : 1821191643\nDepartment : ECE\nMajor : EEE\nNorth South University\n\n\n");
    else if(x==3)
        printf("Name : Ummey Honey Supty\nID : 1831144643\nDepartment : ECE\nMajor : EEE\nNorth South University\n\n\n");
    else if(x==4)
        printf("Name : Rakib Ahmed\nID : 1831685043\nDepartment : ECE\nMajor : EEE\nNorth South University\n\n\n");
    else
        printf("Not registered yet. . . . . \n");



    char s[100];
    printf("Enter the initial of a Faculty: ");
    scanf("%s",s);
    if (strcmp(s, "nva") == 0)
        printf("Dr. Nova Ahmed\nAssociate Professor\nOffice Room No. SAC-927\nDepartment of ECE\nNorth South University\n");
    else if (strcmp(s, "rjp") == 0)
        printf("Dr. Rajesh Palit\nAssociate Professor\nOffice Room No. SAC-934\nDepartment of ECE\nNorth South University\n");
    else if (strcmp(s, "lih") == 0)
        printf("Dr. Lamia Iftekhar\nAssociate Professor\nOffice Room No. SAC-924\nDepartment of ECE\nNorth South University\n");
    else if (strcmp(s, "nbm") == 0)
        printf("Dr. Nabeel Mohammad\nAssistant Professor\nOffice Room No. SAC-917\nDepartment of ECE\nNorth South University\n");
    else if (strcmp(s, "szz") == 0)
        printf("Dr. Sazzad hossain\nAssociate Professor\nOffice Room No. SAC-1029\nDepartment of ECE\nNorth South University\n");

    else
        printf("could not find a faculty with this initial. . . ");

    return 0;

}

