#include <stdio.h>/*primeira estrutura de repetiçao*/
int main(){
    int i;
    for (i = 1; i<= 10 ; i++)/* se for -- inves de ++ a equação fica infinita*/{
        printf("%d\n",i); /*%d pq e em decimal, senao float, linha 6 é a repetição da equação acima*/
    }
    return 0;
}