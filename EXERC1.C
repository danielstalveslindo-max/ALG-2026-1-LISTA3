#include <stdio.h>

int main() {
    float numeros[10];
    float soma = 0, media;
    int i;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        soma += numeros[i];
    }

    media = soma / 10;
    printf("\nMedia dos numeros informados: %.2f\n", media);

    return 0;
}
