#include <stdio.h>
int main() {
    int m,n;
    printf("Enter the number of rows and columns");
    scanf("%d %d" , &m , &n);
    int arr[m][n];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    int tr[n][m];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
        tr[j][i]=arr[i][j];
        }
    }
    for(int i=0 ; i<n ; i++ ){
        for(int j=0 ; j<m ; j++){
            printf("%d" , tr[i][j]);
        }
        printf("\n");
    }
    return 0;
}