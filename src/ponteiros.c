#include <stdio.h>

int main(){
    //declaração da variável idade
    int idade = 18;
    int *p_idade = &idade;

    printf("A idade é %d e está em %p e %p com valor %d\n", idade, &idade);
    return 0;
}