#include<stdio.h>

int main(){
    int N;
    scanf("%d\n", &N);
    for(int i = 1; i<=12; i++){
        printf("%d * %d = %d\n", N, i, N*i);
    }
    return 0;
}