#include <stdio.h>

void cadastro(char *nome, char *email, char *idade ){
    FILE *arquivo;
    arquivo = fopen("files/cad_cli.txt","a");
    fprintf(arquivo,nome);
    fprintf(arquivo,email);
    fprintf(arquivo,idade);
    fclose(arquivo);
}
int main(){
    char nome[30];
    char email[50];
    char idade[2];
    printf("Digite o seu nome e tecle Enter:\n");
    scanf("%[^\n]",nome);
    printf("Digite seu email e tecle Enter:\n");
    scanf("%s",email);
    printf("Digite sua idade e tecle Enter:\n");
    scanf("%s",idade);
    cadastro(nome,email,idade);
    printf("Cadastrou?");
    return 0;
    }