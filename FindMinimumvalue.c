#include<stdio.h>
#include<limits.h>
int main(){
    int arr[4][2];
    int min= INT_MAX;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
    }  
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            if(min>arr[i][j])
            min=arr[i][j];
        }printf("\n");
    }printf("the minimum value is %d", min);
    return 0;
}