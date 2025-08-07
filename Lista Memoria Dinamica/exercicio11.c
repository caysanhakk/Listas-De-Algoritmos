#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int anoNascimento;
} Aluno;

int main() {
    int n;
    scanf("%d", &n);
    Aluno *alunos = (Aluno *)malloc(n * sizeof(Aluno));

    for (int i = 0; i < n; i++) {
        scanf("%d %s %d", &alunos[i].matricula, alunos[i].sobrenome, &alunos[i].anoNascimento);
    }

    for (int i = 0; i < n; i++) {
        printf("%d %s %d\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].anoNascimento);
    }

    free(alunos);
    return 0;
}





