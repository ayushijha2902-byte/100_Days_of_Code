#include <stdio.h>
int main() {
    int n,m , sum=0;
    printf("Enter the number of rows and columns");
    scanf("%d %d" , &m , &n);
    int arr[n][m];
    if(n !=m){
        printf("Not applicable");
    }
    else{
        for(int i =0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                scanf("%d" , &arr[i][j]);
            }
        }
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(i==j){
                sum = sum + arr[i][j];
            }
        }
    }
    }
    printf("Sum of diagonal elements is %d" , sum);
    return 0;
}