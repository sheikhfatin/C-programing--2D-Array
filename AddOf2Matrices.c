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
    int r2;
    printf("Enter the number of rows : ");
    scanf("%d", &r2);
    int c2;
     printf("Enter the number of collums : ");
    scanf("%d", &c2);

    int brr[r2][c2];
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d",&brr[i][j]);
        }
        
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", arr[i][j]+brr[i][j]);
        }printf("\n");
    }return 0;
}