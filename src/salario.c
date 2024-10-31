#include <stdio.h>

int main(){
    float sb, vt = 6.0/100.0, inss = 7.0/100.0, fgts = 8.0/100.0, resultado_vt, resultado_inss, resultado_fgts, total_descontos;
    printf("Qual o valor do salário bruto?\n");
    scanf("%f", &sb);

    // printf("%f\n", vt);
    // printf("%f\n", inss);
    // printf("%f\n", fgts);
    
    resultado_vt = sb * vt;
    resultado_inss = sb * inss;
    resultado_fgts = sb * fgts;
    float salario_liquido = sb - resultado_vt - resultado_inss- resultado_fgts;
    total_descontos = resultado_vt + resultado_inss + resultado_fgts;


    printf("Total de descontos: \nR$%.0f,00\n", total_descontos);
    printf("Salário líquido: \nR$%.0f,00\n", salario_liquido);

    return 0;
}