#include <stdio.h>
int main(){
    int n1 = 10;
    int n2 = 20;
    int rs = n1 +n2; 
    // imprimir o valor da variavel e o 
    // endereço de memória de cada uma
    printf("O valor de n1 é %d\n" ,n1);
    // para exibir o endereço de memória iremos usar o
    //comando &
    printf("o endereço de n1 é %p\n" , &n1);
    
    printf ("O valor de n2 é %d\n" ,n2); 
    printf  ("O endereço de n2 é %p\n" ,&n2);

    printf ("O valor de rs é %d\n" ,rs);
    printf ("O endereço de memória de rs é %p\n" ,&rs);

    return 0;

}