#include <stdio.h>
int devolverResto(int valo,int div);

int main (){
    printf("O resto entre os numeros 2 e 5 é %d\n",devolverResto(2,5));
    return 0;
}

int devolverResto(int valor, int div){
    return valor % div;
}