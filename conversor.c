#include <stdio.h>

int main() {
    double valor, resultado;
    int de, para;

    printf("Conversor de Unidades de Armazenamento\n");
    printf("1. Bits\n");
    printf("2. Bytes\n");
    printf("3. Kilobytes (KB)\n");
    printf("4. Megabytes (MB)\n");
    printf("5. Gigabytes (GB)\n");
    printf("6. Terabytes (TB)\n");

    printf("Escolha a unidade de origem (1-6): ");
    scanf("%d", &de);
    if (de < 1 || de > 6) {
        printf("Unidade de origem inválida.\n");
        return 1;
    }

    printf("Digite o valor: ");
    scanf("%lf", &valor);
    
    printf("Escolha a unidade de destino (1-6): ");
    scanf("%d", &para);
    if (para < 1 || para > 6) {
        printf("Unidade de destino inválida.\n");
        return 1; 
    }

    long long multiplicadores[] = {
        1LL,                          // Bits
        8LL,                          // Bytes
        8LL * 1024,                  // KB
        8LL * 1024 * 1024,           // MB
        8LL * 1024 * 1024 * 1024,    // GB
        8LL * 1024 * 1024 * 1024 * 1024 // TB
    };

    resultado = valor * multiplicadores[de - 1] / multiplicadores[para - 1];

    printf("Resultado: %.6lf\n", resultado);

    return 0;
}