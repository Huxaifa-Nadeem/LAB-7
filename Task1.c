#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6},i,new_arr[6];
    for (i=0;i<6;i++){
        if(i==5){
            new_arr[0]=arr[i];
        }
        new_arr[i+1]=arr[i];
    }
    for(i=0;i<6;i++){
        printf("%d ", new_arr[i]);
    }
}