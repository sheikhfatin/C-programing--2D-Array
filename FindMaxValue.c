#include<stdio.h>
#include<limits.h>
int main(){
    int arr[4][2];
    int max= INT_MIN;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
    }  
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            if(max<arr[i][j])
            max=arr[i][j];
        }printf("\n");
    }printf("the maximum value is %d", max);
    return 0;
}