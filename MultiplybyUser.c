#include<stdio.h>
int main(){
    //taking inputs
    int m;
    printf("Enter the nymber of row of 1st matrix : ");
    scanf("%d", &m);
    int n;
    printf("Enter the nymber of collum of 1st matrix : ");
    scanf("%d", &n);
    int arr[m][n];
    printf("\nEnter the elements of 1st matrix :\n ");
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }int p;
    printf("Enter the nymber of row of 2nd matrix : ");
    scanf("%d", &p);
    int q;
    printf("Enter the nymber of collum of 2nd matrix : ");
    scanf("%d", &q);
    int brr[p][q];
    printf("\nEnter the elements of 2nd matrix :\n ");
    for(int i=0; i<p;i++){
        for(int j=0; j<q; j++){
            scanf("%d",&brr[i][j]);
        }
    }
//multiplaying
int res[m][q];
for(int i=0;i<m;i++){
    for(int j=0; j<q;j++){
        res[i][j]=0;
        for(int k=0; k<n;k++){
res[i][j]+=arr[i][k]*brr[k][j];
        }
    }
}
//output

for(int i=0;i<m;i++){
    for(int j=0; j<q;j++){
        printf("%d ", res[i][j]);
    }printf("\n");
}return 0;


}
