#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    int c;
     printf("Enter the number of collums : ");
    scanf("%d", &c);

    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
        
    }printf("\n");
    int sum =0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum += arr[i][j];

        }
    }printf("The sum %d", sum);
    return 0;
}