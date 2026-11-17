#include <stdio.h>

int main() {
    int n ,m;
    scanf("%d %d" , &n , &m);
    int arr1[n];
    int arr2[m];
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr1[i]);
    }
    for(int i=0 ; i<m ; i++){
        scanf("%d" , &arr2[i]);
    }
    int ans[m+n];
    for(int i=0 ; i<n+m ; i++){
        arr1[i+n] += arr2[m]; 
    }
        for(int i=0 ; i<n ; i++){
        printf("%d" , arr1[i]);

    return 0;
}
}