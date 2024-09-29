# Atividade: Movimento do Robô em Espiral

Este projeto implementa um algoritmo em C que simula o movimento de um robô em um padrão de espiral. O robô começa na posição inicial (0, 0) e realiza movimentos em quatro direções (direita, cima, esquerda e baixo) em um padrão crescente. O objetivo é determinar a posição final do robô e a distância total percorrida após \( N \) ciclos de movimento.

## Estruturas:

As seguintes estruturas de dados são utilizadas para gerenciar o movimento do robô:

### Estrutura `Ponto`

```c
typedef struct Ponto {
    int X;               // Coordenada X do ponto
    int Y;               // Coordenada Y do ponto
    struct Ponto *Próximo; // Ponteiro para o próximo ponto na lista
} Ponto;
```
As estruturas apresentadas acima foram determinadas pelo próprio professor da faculdade.

### Estrutura `Caminho`

```c
typedef struct Caminho {
    Ponto *Origem;       // Ponteiro para o ponto de origem
    int N;               // Número total de pontos percorridos
    int Distancia;       // Distância total percorrida
} Caminho;
```

## Funções Implementadas

### `Caminho *iniciarCaminho(int N)`

Aloca memória para a estrutura `Caminho` e inicializa as variáveis. O ponto de origem é (0, 0), o número de pontos é `N` e a distância inicial é 0.

### `Ponto final(Caminho *C)`

Retorna o ponto final ocupado pelo robô após `N` ciclos. Por exemplo, para `N = 6`, o retorno será o ponto (2, 2).

### `int Distancia(Caminho *C)`

Retorna a distância total percorrida pelo robô após `N` ciclos. Para `N = 6`, a distância total será 12.