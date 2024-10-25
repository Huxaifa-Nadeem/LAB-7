#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int len,i,a=0,e=0,character_i=0,o=0,u=0;
    gets(string);
    len = strlen(string);
    for(i=0;i<len;i++){
        switch(string[i]){
            case 'a':
            case 'A':
            a++;
            break;
            case 'e':
            case 'E':
            e++;
            break;
            case 'i':
            case 'I':
            character_i++;
            break;
            case 'o':
            case 'O':
            o++;
            break;
            case 'u':
            case 'U':
            u++;
            break;
        
        }
    }
printf("a are:%d\ne are:%d\ne are:%d\ni are:%d\no are:%d\nu are:%d",a,e,character_i,o,u);
}