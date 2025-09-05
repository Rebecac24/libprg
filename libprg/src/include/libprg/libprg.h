#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdbool.h>

typedef struct pilha pilha_t;

// Comportamentos da pilha
pilha_t* criar_pilha(int capacidade);
void empilhar(pilha_t* pilha, int elemento);
int desempilhar(pilha_t* pilha);
int tamanho_pilha(pilha_t* pilha);
bool pilha_vazia(pilha_t* pilha);
int topo_pilha(pilha_t* pilha);
void destruir_pilha(pilha_t* pilha);

#endif
