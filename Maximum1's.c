#include<stdio.h>
int main(){
    int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
int maxcount=0;
int idx=-1;
for(int i=0; i<3;i++){
    int count=0;
    for(int j=0; j<4;j++){
if(arr[i][j]==1) count++;
    }
    if(maxcount<count){
    maxcount=count;
    idx=i;
}printf("\n");
}
printf("The maximun number of 1's is %d and it is in row %d", maxcount,idx);
return 0;
}