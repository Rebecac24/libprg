//
// Created by rebeca on 02/09/2025.
//
#include "libprg/libprg.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void empilhar(pilha_t* pilha,int valor) {
    if (pilha->topo < pilha->capacidade -1) {
        pilha->topo++;
        pilha->elementos[pilha->topo] = valor;
    }
}


int desempilhar(pilha_t* pilha) {
    if (pilha->topo < 0) {
        return -1; // Pilha vazia
    }
    int elemento = pilha->elementos[pilha->topo];
    pilha->topo--;
    return elemento;
}

int tamanho_pilha(pilha_t* pilha) {
    return pilha->topo + 1;
}

bool pilha_vazia(pilha_t* pilha) {
    return pilha->topo < 0;
}

int topo_pilha(pilha_t* pilha) {
    if (pilha->topo < 0) {
        return -1; // Pilha vazia
    }
    return pilha->elementos[pilha->topo];
}

void destruir_pilha(pilha_t* pilha) {
        free(pilha->elementos);
        free(pilha);
    }

