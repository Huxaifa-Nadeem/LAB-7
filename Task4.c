#include<stdio.h>
#include<string.h>
int main(){
int i=0,j=0,len=0,check=0;
char arr[100],new_str[100];
printf("please enter the string: ");
scanf("%s",arr);
for(len=0;arr[len]!='\0';len++){
}
for(i=0;i<len;i++){
new_str[(len-1)-i]=arr[i];
}

for(i=0;i<len;i++){
if(new_str[i]==arr[i]){
check++;
}
}
if(check==len){
printf("string is palindrome");
}
else
printf("This is not a palindrome string");

}