#include <stdio.h>
int main() {
    int n ,m , x ,y;
    printf("Enter number of rows and columns for the first matrix");
    scanf("%d %d" , &n , &m);
    printf("Enter number of rows and columns for the second matrix");
    scanf("%d %d" , &x , &y);
    int arr1[n][m];
    int arr2[x][y];
    if(x != m){
        printf("Not applicable");
        return 0;
    }
    else{
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
        int ans[n][y];
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<y ; j++){
                ans[i][j]=0;
                for(int k = 0 ; k<m ; k++){
                    ans[i][j] = ans[i][j] + (arr1[i][k] * arr2[k][j]);
                }
            }
        }
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<y ; j++){
                printf("%d " , ans[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}