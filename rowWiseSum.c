#include<stdio.h>
int main(){
    int arr[4][4]={{10,2,3,1},{3,6,0,0},{0,5,0,2},{9,0,0,1}};
    int maxsum=0;
    int idx=-1;
    for(int i=0; i<4; i++){
        int sum=0;
        for(int j=0; j<4; j++){
        sum=sum+arr[i][j];
        }if(maxsum<sum) maxsum=sum;
        idx=i;
    }printf("the highest sum is %d and its in row %d", maxsum,idx);
    return 0;
}
