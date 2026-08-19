#include <stdio.h>

int main() {
    float valor, total;
    int codigo;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor);

    printf("Digite o codigo (1 - Cliente comum / 2 - Funcionario): ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        if (valor > 1000) {
            total = valor * 0.97; // 3% de desconto
        } else {
            total = valor;
        }

        printf("Valor a pagar: R$ %.2f\n", total);

    } else if (codigo == 2) {
        total = valor * 0.95; // 5% de desconto
        printf("Valor a pagar: R$ %.2f\n", total);

    } else {
        printf("Codigo invalido!\n");
    }

    return 0;
}
