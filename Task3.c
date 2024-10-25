#include<stdio.h>
int main(){
int i=0,len=0;
char input_string[20];
int temp=0;
printf("Please enter the string: ");
scanf("%s",input_string);

for(len=0;input_string[len]!='\0';len++){
}
printf("The length of string is: %d\n",len);
for(i=0;i<len/2;i++){
temp=input_string[i];
input_string[i]=input_string[(len-1)-i];
input_string[(len-1)-i]=temp;

}
printf("\nreversed string: %s\n", input_string);

}