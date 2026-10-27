#include<stdio.h>

int main(){
    int X;

    while(1){
        scanf("%d\n", &X);
        if(X==1999){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    };
    
    return 0;
}
// #include<stdio.h>

// int main(){
//     int pass = 1999, X;
//     scanf("%d ", &X);
//     int arr[X];
//     for(int i=0; i<X; i++){
//         scanf("%d\n ", &arr[i]);
//     }
//     for(int i=0; i<X; i++){
//         if(arr[i]==pass){
//             printf("Correct\n");
//             break;
//         }
//         else{
//             printf("Wrong\n");
//         }
//     }
    
//     return 0;
// }