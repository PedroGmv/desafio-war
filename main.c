#include <stdio.h>
#include <string.h> // Necessário para manipular strings (strcspn)

// 1. Definição da Struct (O "Molde" do Território)
struct Territorio {
    char nome[50];
    char cor[20];
    int tropas;
};

int main() {
    // 2. Criação do Vetor Estático
    // Criamos um vetor que comporta exatamente 5 estruturas do tipo 'Territorio'
    struct Territorio mapa[5]; 
    int i;

    printf("=== CONFIGURACAO DO TABULEIRO WAR ===\n\n");

    // 3. Loop de Cadastro (Entrada)
    for(i = 0; i < 5; i++) {
        printf("--- Cadastro do Territorio %d ---\n", i + 1);

        // Lendo o Nome com fgets (permite espaços, ex: "America do Sul")
        printf("Nome do Territorio: ");
        fgets(mapa[i].nome, 50, stdin);
        // Remove o "Enter" (\n) que o fgets captura no final
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = 0;

        // Lendo a Cor
        printf("Cor do Exercito: ");
        fgets(mapa[i].cor, 20, stdin);
        mapa[i].cor[strcspn(mapa[i].cor, "\n")] = 0;

        // Lendo o Número de Tropas
        printf("Numero de Tropas: ");
        scanf("%d", &mapa[i].tropas);

        // IMPORTANTE: Limpeza do Buffer
        // O scanf deixa um '\n' no buffer de entrada. O getchar() consome isso
        // para não pular o próximo fgets na próxima volta do loop.
        getchar(); 
        
        printf("\n");
    }

    // 4. Exibição dos Dados (Saída)
    printf("=== ESTADO ATUAL DO MAPA ===\n");
    printf("%-20s | %-15s | %s\n", "NOME", "COR", "TROPAS");
    printf("----------------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        // %-20s alinha a string à esquerda ocupando 20 espaços
        printf("%-20s | %-15s | %d\n", 
               mapa[i].nome, 
               mapa[i].cor, 
               mapa[i].tropas);
    }

    return 0;
}
