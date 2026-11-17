#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows and columns");
    scanf("%d %d" , &m , &n);
    int arr[n][m];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }
    return 0;    
} 