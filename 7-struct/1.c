#include <stdio.h>

struct Aluno
{
    int nMat;      // número de matrícula
    float nota[3]; // três notas
    float media;   // média aritmética
};                 // fim da definição da estrutura (com ;)

int main()
{
    struct Aluno bart; // declara a variável do tipo 'struct Aluno'
    bart.nMat = 1521001;
    bart.nota[0] = 8.5;
    bart.nota[1] = 9.5;
    bart.nota[2] = 10.0;
    bart.media = (bart.nota[0] + bart.nota[1] + bart.nota[2]) / 3.0;
    printf("Matrícula: %d\n", bart.nMat);
    printf("Média : %.1f\n", bart.media);
    return 0;
}
