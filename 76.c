#include <stdio.h>
int main() {
    int n ,m;
    printf("Enter number of rows and columns for the matrix");
    scanf("%d %d" , &n , &m);
    int arr[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    int tr[m][n];
    if(n != m){
        printf("Not symmetric");
        return 0;
    }
    else{
    for(int i =0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            tr[j][i] = arr[i][j];
        }
    }
    int count=0;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n; j++ ){
        if(arr[i][j] != tr[i][j]){
            count++;
        }
        }
    }
    if(count==0){
        printf("Symmetric");
    }
    else{
        printf("Not symmetric");
    }
}
    return 0;
}