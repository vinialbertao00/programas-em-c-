#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char origem, char destino, char aux){

    if(n == 1){
        printf("move %d da haste %c para %c\n", n, origem, destino);
        return;
    }

    hanoi(n-1, origem, aux, destino);
    printf("move %d da haste %c para %c\n",n , origem, destino);
    hanoi(n-1, aux, destino, origem);

    return;
}

int main(){

    hanoi(4, 'A', 'C', 'B');
}
