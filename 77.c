#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows and columns");
    scanf("%d %d" , &m , &n);
    int arr[n][m];
    if(n !=m){
        printf("Not applicable");
    }
    else{
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    int count =0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<m ; j++){
            if(arr[i][i] == arr[j][j]){
                count++;
            }    
        }
    }
    if(count == 0)
    printf("Distinct");
    else{
        printf("Not Distinct");
    }
}
    return 0;
}