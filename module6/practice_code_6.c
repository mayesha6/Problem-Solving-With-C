#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int N[T], div, mod;
    for(int i=1; i<=T; i++){
        scanf("%d", &N[i]);
    }
    for(int i=1; i<=T; i++){
        if (N[i]/10>=0){            
            div = N[i]/10;
            mod = N[i]%10;
            printf("%d ", mod);
            while(div!=0) {            
                mod=div%10;
                div=div/10;
                printf("%d ", mod);                
            };
            
        }
        printf("\n");
    }
    return 0;
}