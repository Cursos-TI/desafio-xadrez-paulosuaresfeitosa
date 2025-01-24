desafio concluído
#include <stdio.h>

int main() {
    int opcao;
    char direcao;

    printf("Simulador de Movimentação de Xadrez\n");

    while (1) { // Loop principal do jogo
        printf("\nEscolha a peça que deseja movimentar:\n");
        printf("1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        printf("0 - Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Jogo encerrado. Até a próxima!\n");
            break;
        }

        switch (opcao) {
            case 1: // Movimentação do Bispo
                printf("\nVocê escolheu o Bispo. Ele se move 5 casas na diagonal superior direita.\n");
                printf("Deseja confirmar o movimento? (s/n): ");
                scanf(" %c", &direcao);
                if (direcao == 's') {
                    printf("Movimento executado: Bispo se moveu 5 casas na diagonal superior direita.\n");
                } else {
                    printf("Movimento cancelado.\n");
                }
                break;

            case 2: // Movimentação da Torre
                printf("\nVocê escolheu a Torre. Ela se move 5 casas para a direita.\n");
                printf("Deseja confirmar o movimento? (s/n): ");
                scanf(" %c", &direcao);
                if (direcao == 's') {
                    printf("Movimento executado: Torre se moveu 5 casas para a direita.\n");
                } else {
                    printf("Movimento cancelado.\n");
                }
                break;

            case 3: // Movimentação da Rainha
                printf("\nVocê escolheu a Rainha. Ela se move 8 casas para a esquerda.\n");
                printf("Deseja confirmar o movimento? (s/n): ");
                scanf(" %c", &direcao);
                if (direcao == 's') {
                    printf("Movimento executado: Rainha se moveu 8 casas para a esquerda.\n");
                } else {
                    printf("Movimento cancelado.\n");
                }
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}
