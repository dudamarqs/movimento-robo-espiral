#include "robo.c"

int main() {
    int N = 6;
    Caminho *caminho = iniciarCaminho(N);

    if (!caminho) {
        printf("Erro ao alocar memoria.");
        return 1; // encerra o programa com erro.
    }

    Ponto pontoFinal = Final(caminho);
    printf("\nPonto final do caminho: (%d, %d).\n", pontoFinal.X, pontoFinal.Y);

    int distanciaTotal = Distancia(caminho);
    printf("\nDistancia percorrida: %d", distanciaTotal);

    free(caminho->Origem);
    free(caminho);

    return 0;
}