#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);
    if (num > 0) {
        printf("Quadrado: %f\n", pow(num, 2));
        printf("Raiz quadrada: %f", sqrt(num));
    } else {
        printf("O numero deve ser positivo.");
    }
    return 0;
}
