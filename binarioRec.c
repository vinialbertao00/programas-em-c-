#include <stdio.h>
#include <stdlib.h>

void dec2bin(int n) {

    if(n == 0 || n == 1){
        printf("%d", n);
        return;
    }

    dec2bin(n / 2);

    printf("%d", n % 2);

    return;
}

int main(){

    for(int i = 0; i <= 32; i++){
        printf("(%d)_10 = (", i);
        dec2bin(i);
        printf(")_2\n");
    }
}

