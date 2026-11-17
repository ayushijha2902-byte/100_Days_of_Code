#include <stdio.h>
int main(){
    int m ,n;
    printf("Enter the number of rows and columns");
    scanf("%d %d" , &m , &n);
    int arr[m][n];
    int sum[m];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            sum[i] = sum[i] + arr[i][j];
        }
        printf("Sum of row %d is %d \n" , i+1 , sum[i]);
    }
    return 0;
}