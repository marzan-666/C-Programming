#include<stdio.h>

int main(){
    int i,count=0;
    char c[100];
    gets(c);

    while(c[i]!='\0'){
        i++;
        //count++;
        if(c[i]=='a'||c[i]=='e'|| c[i]=='i'|| c[i]=='o'|| c[i]=='u'){
            c[i]='*';
        }
        else if(c[i]==' '){
            c[i]='?';
        }

    }
    puts(c);
    //printf("String length is = %d ",count);
    return 0;
}
