#include<stdio.h>
#include<ctype.h>

int main(){
    char X;
    scanf("%c", &X);
    if(isupper((unsigned char)X)){
        printf("ALPHA\nIS CAPITAL");
    }
    else if(islower((unsigned char)X)){
        printf("ALPHA\nIS SMALL");
    }
    else if(isdigit((unsigned char)X)){
        printf("IS DIGIT");
    }
    else{
        printf("Not a valid input.");
    }
    return 0;
}