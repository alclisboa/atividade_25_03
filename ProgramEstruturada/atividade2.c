#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("%d e o maior.", num1);
    } else if (num2 > num1) {
        printf("%d e o maior.", num2);
    } else {
        printf("Os numeros sao iguais.");
    }
    return 0;
}
