#include <stdio.h>
#include <stdlib.h>

long fibo(int n){

    if(n == 0 || n == 1){
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}

int main(){

    for(int i = 0; i <= 14; i++){
        printf(" %d", fibo(i));
    }
}


