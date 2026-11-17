#include <stdio.h>
int main() {
    int n ,  positive=0,negative=0 , zero=0;;
    printf("Enter size of array");
    scanf("%d" , &n);
    int arr[n];
    for(int i =0 ; i<n ; i++){
        printf("Enter element %d " , i);
        scanf("%d" , &arr[i]);
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]>0){
            positive++;
        }
        else if(arr[i]==0){
            zero++;
        }
        else{
            negative++;
        }
    }
    printf("%d %d %d" , positive , negative ,zero);
    return 0;
}