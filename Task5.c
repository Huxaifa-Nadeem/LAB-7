#include<stdio.h>
int main()
{
int arr[10];
int frequency[100]={0},i=0;
for(i=0;i<10;i++){
scanf(" %d",&arr[i]);
frequency[arr[i]]++;
}
for(i=0;i<100;i++)
{
if(frequency[i]>0)
printf("element %d occurs %d times\n",i,frequency[i]);
}

}