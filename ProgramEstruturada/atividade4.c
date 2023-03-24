#include <stdio.h>

int main() {
    float salario, prestacao;
    printf("Digite o salario do trabalhador e o valor da prestacao: ");
    scanf("%f %f", &salario, &prestacao);
    if (prestacao > salario * 0.2) {
        printf("Emprestimo nao concedido.");
    } else {
        printf("Emprestimo concedido.");
    }
    return 0;
}
