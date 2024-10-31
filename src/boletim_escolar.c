#include <stdio.h>
int main(){
    float n1, n2, n3, n4, soma,media;
     printf("Digite a primeira nota e tecle Enter:\n");
    scanf("%f",&n1);
    printf("Digite a segunda nota e tecle Enter:\n");
    scanf("%f",&n2);
     printf("Digite a terceira nota e tecle Enter:\n");
    scanf("%f",&n3);
    printf("Digite a primeira nota e tecle Enter:\n");
    scanf("%f",&n4);

    soma = n1 + n2 +n3 +n4;
    media = soma / 4;
    
    printf("A média das notas %.1f\n",media);
    return 0;


}