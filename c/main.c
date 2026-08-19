#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("\nEscolha a operacao:\n");
    printf("0 - Soma\n");
    printf("1 - Subtracao\n");
    printf("2 - Multiplicacao\n");
    printf("3 - Divisao\n");
    printf("Digite a opcao: ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 0:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 1:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Nao e possivel dividir por zero!\n");
            }
            break;

        default:
            printf("Operacao escolhida nao e valida.\n");
    }

    return 0;
}
