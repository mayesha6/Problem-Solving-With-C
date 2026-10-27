#include<stdio.h>

int main(){

    int a=8;
    int res = 200;
    for(int i=1; i<=res/a; i++){
        printf("%d*%d=%d\n", a,i, a*i);
    }
    return 0;
}