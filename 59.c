#include <stdio.h>
int main() {
    int n , even=0 , odd=0;
    printf("Enter size of array");
    scanf("%d" , &n);
    int arr[n];
    for(int i =0 ; i<n ; i++){
        printf("Enter element %d " , i);
        scanf("%d" , &arr[i]);
    }
    for(int i =0 ; i<n ; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d" , even , odd);
    return 0;
}