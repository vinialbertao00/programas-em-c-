#include <stdio.h>
#include <stdlib.h>

void f1(int n){
    if(n == 0){
        return;
    }

    f1(n-1);
    printf("%d ", n);
}

void f2(int n) {
    if(n == 0)
        return;
    printf("%d ", n);

    f2(n-1);
}

int main(){
    f1(10);
    printf("\n");
    f2(10);
}
