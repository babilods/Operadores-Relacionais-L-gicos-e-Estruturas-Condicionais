#include <stdio.h>

int main() {
    float peso;

    printf("Digite o seu peso ");
    scanf("%f", &peso);

    if (peso < 60) {
        printf("O peso é menor que 60 kg");
    } else {
        printf("O peso não é menor que 60 kg");
    }
}
