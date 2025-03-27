#include <stdio.h>

int main() {
    int i, a, resultado = 0;
    
    printf("Digite um número: ");
    scanf("%d", &i);
    
    printf("Digite o valor pelo qual será multiplicado: ");
    scanf("%d", &a);
    
    for (int j = 0; j < a; j++) { 
        resultado += i; 
    }

    printf("Resultado: %d\n", resultado);
    
    return 0;
}
