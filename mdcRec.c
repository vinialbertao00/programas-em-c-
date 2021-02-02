#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b){

    if(b == 0){
        return a;
    }

    return mdc(b, a % b);
}



int main(){

    printf("mdc (52,24) = %d\n", mdc(52,24));

    printf("mdc (%d,%d) = %d\n ", 180, 168, mdc(180, 168));
}
