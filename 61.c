#include <stdio.h>
int main() {
    int n , num;
    printf("Enter size of array");
    scanf("%d" , &n);
    printf("Enter number");
    scanf("%d" , &num);

    int arr[n];
    for(int i =0 ; i<n ; i++){
        printf("Enter element %d " , i);
        scanf("%d" , &arr[i]);
    }
    for(int i=0; i<n ; i++){
       if(num==arr[i]){
        printf("%d" , i);
       }
    }
    return 0;
}