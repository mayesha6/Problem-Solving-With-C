#include<stdio.h>
#include <ctype.h>

int main(){
    char X;
    scanf("%c", &X);
    if(isupper((unsigned char)X)){
        printf("%c", tolower((unsigned char)X));
    }
    else if(islower((unsigned char)X)){
        printf("%c", toupper((unsigned char)X));
    }
    else{
        printf("Not a valid input");
    }
    return 0;
}