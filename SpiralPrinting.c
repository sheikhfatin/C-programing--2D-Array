#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of row of  matrix : ");
    scanf("%d", &m);
    int n;
    printf("Enter the number of collum of matrix : ");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter the elements of matrix\n : ");
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tnc=m*n;
    int count=0;
    while(tnc>count){
        for(int j=minc; j<=maxc; j++){
            printf("%d ", arr[minr][j]);
            count ++;
        }minr++;
        if(count>=tnc) break;
    
    for(int i=minr; i<=maxr; i++){
            printf("%d ", arr[i][maxc]);
            count ++;
        }maxc--;
        if(count>=tnc) break;
        for(int j=maxc; j>=minc; j--){
            printf("%d ", arr[maxr][j]);
            count ++;
        }maxr--;
        if(count>=tnc) break;
        for(int i=maxr; i>=minr; i--){
            printf("%d ", arr[i][minc]);
            count ++;
        }minc++;
        if(count>=tnc) break;
}
return 0;
}
