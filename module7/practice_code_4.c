#include<stdio.h>

int main(){
    int n;
    scanf("%d\n", &n);
    int arr[n];
    int min = arr[0];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    
        printf("%d ", min);
    return 0;
}