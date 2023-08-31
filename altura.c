#include <stdio.h>

int main() {
    float altura;

    printf("Digite a altura da pessoa em metros: ");
    scanf("%f", &altura);
    
    if (altura > 1.8) {
        printf("A altura é maior que 1.8 metros");
    } else {
        printf("A altura não é maior que 1.8 metros");
    }

}
