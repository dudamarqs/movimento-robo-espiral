// Arquivo com as funções a serem implementadas
#include <stdio.h>
#include <stdlib.h>
#include "robo.h"

Caminho *iniciarCaminho(int N) {
    Caminho *caminho = (Caminho *)malloc(sizeof(Caminho));
    if (!caminho) {
        return NULL;
    }

    caminho->Origem = (Ponto *)malloc(sizeof(Ponto));
    if (!caminho->Origem) {
        free(caminho);
        return NULL;
    } 

    caminho->Origem->X = 0;
    caminho->Origem->Y = 0;
    caminho->Origem->Proximo = NULL;

    caminho->N = N;
    caminho->Distancia = 0;

    return caminho;
}

Ponto Final(Caminho *C) {
    Ponto ponto = {0, 0, NULL};

    if (!C || C->N < 0) {
        return ponto; // retorna à posição inicial (0, 0);
    }

    int x = 0, y = 0;
    int passo = 1;
    int direcao = 0;

    for (int i = 0; i < C->N; i++) {
        switch (direcao)
        {
        case 0: x += passo; break; // direita
        case 1: y += passo; break; // cima
        case 2: x -= passo; break; // esquerda
        case 3: y -= passo; break; // baixo
        }

        direcao = (direcao + 1) % 4;
        if (direcao == 0 || direcao == 2)
            passo++;
    }

    ponto.X = x;
    ponto.Y = y;

    return ponto;
}

int Distancia(Caminho *C) {
    if (!C || C->N < 0)
        return 0;
    
    int distancia = 0;
    int passo = 1;

    for(int i = 0; i < C->N; i++) {
        distancia += passo;

        if((i + 1) % 2 == 0)
            passo++;
    }

    return distancia;
}