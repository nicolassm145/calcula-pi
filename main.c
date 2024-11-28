#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double calculaPI(long long pTotal) {
    long long pIn = 0;

    // Executa o cálculo de Monte Carlo
    for (long long i = 0; i < pTotal; i++) {
        // Gera as coordenadas x e y aleatórias no intervalo [0, 1)
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;

        // Verificar se está dentro do círculo
        if (x * x + y * y <= 1.0) {
            pIn++;
        }
    }

    // Formula: 4 * (Pin / Ptotal)
    return 4.0 * (double)pIn / (double)pTotal;
}

int main() {
    long long pTotal;
    srand(time(NULL));

    printf("Digite o numero de pontos para calcular PI: ");
    scanf("%lld", &pTotal);

    if (pTotal > 1000000000) {
        printf("Erro: O valor inserido é muito grande! Escolha um número ate 1.000.000.000.\n");
        return 1;
    }
    double pi = calculaPI(pTotal);

    printf("Estimativa de PI com %lld pontos: %.15f\n", pTotal, pi);
    printf("Valor de PI: 3.14159265359");
    return 0;
}
