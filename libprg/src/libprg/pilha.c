//
// Created by rebeca on 02/09/2025.
//
#include "libprg/libprg.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int* elementos;
    int topo;
    int capacidade;
} pilha_t;

//comportamentos da pilha: criar, empilhar, desempilhar, tamanho, vazia, destruir

pilha_t* criar_pilha(int capacidade){

    pilha_t* p = malloc(sizeof(pilha_t));

    p->elementos = malloc(capacidade * sizeof(int));

    p->topo = -1;
    p->capacidade = capacidade;
    return p;
}

void destruir_pilha(pilha_t** pp) {

}

