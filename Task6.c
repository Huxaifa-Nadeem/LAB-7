#include<stdio.h>
int main(){
    int i=0,arr[100],num,x=1;
    printf("Please enter the array size: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("Please enter the value of element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    i=0;
    while(i<num && x<num){
        if(arr[i]==arr[x]){
            printf("duplicates are: %d\n",arr[i]);
            i++;
            x=i+1;
        }
        else{
            x++;
        }
    }
}