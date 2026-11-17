#include <stdio.h>
int main() {
    int n ,m , x ,y;
    printf("Enter number of rows and columns for the first matrix");
    scanf("%d %d" , &n , &m);
    printf("Enter number of rows and columns for the second matrix");
    scanf("%d %d" , &x , &y);
    int arr1[n][m];
    int arr2[x][y];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            scanf("%d" , &arr1[i][j]);
        }
    }
    for(int i=0 ; i<x ; i++){
        for(int j=0 ; j<y ; j++){
            scanf("%d" , &arr2[i][j]);
        }
    }
        if(n!=x || m!=y){
        printf("Matrices cannot be added");
    }
    else{
        int sum[n][m];
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                sum[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        printf("Sum of the matrices is \n");
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                printf("%d " , sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}