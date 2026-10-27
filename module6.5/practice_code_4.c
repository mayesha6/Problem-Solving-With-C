#include<stdio.h>

int main(){
    int N, div, mod;
    scanf("%d", &N);
    div = N/10;
    mod = N%10;
    if(div == 0 || mod == 0){
        printf("YES");
    }
    else if(div%mod == 0 || mod%div == 0){
        printf("YES");
    }
    
    else{
        printf("NO");
    }

    return 0;
}