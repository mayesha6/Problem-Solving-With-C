#include<stdio.h>

int main(){
    int N;
    scanf("%d\n", &N);
    int arr[N], max=0;
    for(int i = 0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<N; i++){
        
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d", max);
    return 0;
}