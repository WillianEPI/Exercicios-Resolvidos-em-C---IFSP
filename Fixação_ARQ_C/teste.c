#include <stdio.h>
#define notas 2

void Entrada(float Alunos_notas[][notas], int alunos){
    FILE *ARQUIVO_ZORZAN;
    int i, j;

    ARQUIVO_ZORZAN = fopen("temosqueteachar.txt", "w");

    for (i = 0; i < alunos; i++) {
        for (j = 0; j < notas; j++) {
            printf("Digite a %i nota do aluno %i: ", j + 1, i + 1);
            scanf("%f", &Alunos_notas[i][j]);
            fprintf(ARQUIVO_ZORZAN, "Aluno %i, Nota %i: %.2f\n", i + 1, j + 1, Alunos_notas[i][j]);
        }
    }
    fclose(ARQUIVO_ZORZAN);
}

void Processamento(float Alunos_notas[][notas], int alunos){
    FILE *ARQUIVO_ZORZAN;
    int i, j;
    float media_alunos[alunos];

    ARQUIVO_ZORZAN = fopen("temosqueteachar.txt", "r");

    for (i = 0; i < alunos; i++) {
        media_alunos[i] = 0; // Inicializar a soma das notas
        for (j = 0; j < notas; j++) {
            media_alunos[i] += Alunos_notas[i][j];
        }
        media_alunos[i] /= notas; // Calcular a média
    }
    fclose(ARQUIVO_ZORZAN);

    for (i = 0; i < alunos; i++) {
        printf("Media = %.2f, Aluno %i\n", media_alunos[i], i + 1);
    }
}

int main(){
    int alunos = 0;
    printf("Digite o numero de alunos: ");
    scanf("%i", &alunos);

    float Alunos_notas[alunos][notas]; // Definir o tamanho do array com base no número de alunos

    Entrada(Alunos_notas, alunos);
    Processamento(Alunos_notas, alunos);

    return 0;
}
