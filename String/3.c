#include<stdio.h>

int main(){
    int i,count=0,length;
    char c[100],d[100];
    gets(c);

    /*while(c[i]!='\0'){
        i++;
        //count++;
        if(c[i]=='a'||c[i]=='e'|| c[i]=='i'|| c[i]=='o'|| c[i]=='u'){
            c[i]='*';
        }
        else if(c[i]==' '){
            c[i]='?';
        }

    }*/
    puts(c);
    length=strlen(c);
    printf("String length is = %d \n",length);
    strcpy(d,c);
    puts(d);
    return 0;
}

