#include <stdio.h>
#include <stdlib.h>

long soma(int v[], int n){

    if (n == 1){
        return v[0];
    }

    return v[n-1] + soma(v, n-1);

}

int main(){

    int v[5] = {10, 5, 8, 7, 15};

    printf("%ld\n", soma(v, 5));
}
