#include <stdio.h>

void mover_bispo_recursivo(int posicao) {
    if (posicao > 5) {
        return;
    }
    printf("Direita\n");
    printf("Cima\n");
    mover_bispo_recursivo(posicao + 1);
}

void mover_torre_recursivo(int posicao) {
    if (posicao > 5) {
        return;
    }
    printf("Direita\n");
    mover_torre_recursivo(posicao + 1);
}

void mover_rainha_recursivo(int posicao) {
    if (posicao > 8) {
        return;
    }
    printf("Esquerda\n");
    mover_rainha_recursivo(posicao + 1);
}

void mover_cavalo_avancado() {
    int movimento_vertical, movimento_horizontal;
    int movimentos_completos = 0;
    
    for (movimento_vertical = 1; movimento_vertical <= 2 && movimentos_completos == 0; movimento_vertical++) {
        for (movimento_horizontal = 1; movimento_horizontal <= 1; movimento_horizontal++) {
            
            if (movimento_vertical == 1) {
                continue;
            }
            
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            
            movimentos_completos = 1;
            break;
        }
    }
}

int main() {
    printf("========================================\n");
    printf("      MATECHECK - MOVIMENTACAO MESTRE\n");
    printf("========================================\n\n");
    
    printf("Movimento do Bispo (5 casas diagonal direita-cima):\n");
    mover_bispo_recursivo(1);
    
    printf("\n");
    
    printf("Movimento da Torre (5 casas para direita):\n");
    mover_torre_recursivo(1);
    
    printf("\n");
    
    printf("Movimento da Rainha (8 casas para esquerda):\n");
    mover_rainha_recursivo(1);
    
    printf("\n");
    
    printf("Movimento do Cavalo (L para cima-direita):\n");
    mover_cavalo_avancado();
    
    printf("\n========================================\n");
    printf("      MOVIMENTACAO CONCLUIDA\n");
    printf("========================================\n");
    
    return 0;
}
