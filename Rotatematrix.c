#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows/collums : ");
    scanf("%d", &n);
   
    //input
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\n");
    //transpose
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //rotate
    for(int i=0; i<n; i++){
        int j=0;
        int k=n-1;
        while(j<k){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
           
    }
    //output
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d", arr[i][j]);
        }printf("\n");
    }return 0;
}