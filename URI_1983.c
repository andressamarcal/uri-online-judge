#include <stdio.h>

struct Aluno{
    float nota;
    int matricula;
};

int main(){
    int qt_aluno, resultado;
    float nota_max = 0.0;
    scanf("%d", &qt_aluno);
    
    struct Aluno aluno[qt_aluno];

    int i = 0;
    while (i < qt_aluno){
        scanf("%d %f", &aluno[i].matricula, &aluno[i].nota);
        if (aluno[i].nota > nota_max){
                nota_max = aluno[i].nota;
                resultado = i;
        }
    i++;
    }
    if (aluno[resultado].nota >= 8.0)
        printf ("%d\n", aluno[resultado].matricula);
    else
        printf ("Minimum note not reached\n");
    
    return 0;
}