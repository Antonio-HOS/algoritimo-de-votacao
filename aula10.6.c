#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("\n\n\n\nVamos avaliar a nota do R.U, insira as notas desejadas dos alunos[notas: 0-5]\n");

    int laco = 0;
    int coleta = 0;
    int quantAlunos = 0;
    int validQuantAlunos = 0;

    printf("\n\nprimeiro me diga, quantos alunos voce possui?\n\n");
    while (validQuantAlunos == 0)
    {
        scanf("%i", &quantAlunos);
        if (quantAlunos < 0 || quantAlunos > 999)
        {
            printf("\n\nme parece uma quantidade irreal, por favor insira uma nova quantidade:\n\n ");
        }
        else
        {
            printf("\n\nperfeito, vamos progredir...\n\n Insira a nota dos alunos a seguir.\n\n");
            validQuantAlunos = 1;
        }
    }
        int respostas[quantAlunos];


    while (laco < quantAlunos)
    {
        printf("aluno de numero %d: ", laco + 1);
        scanf("%d", &coleta);
        if (coleta < 0 || coleta > 5)
        {
            printf("\n\n\n\n\n A nota foge da no intervalo [0-5], codigo quebrando... \n\n\n\n\n");
            return 1;
        }
        respostas[laco] = coleta;

        laco++;
    }
    int frequencia[6] = {0};

    for (int i = 0; i < quantAlunos; i++)
    {
        ++frequencia[respostas[i]];
    }
    printf("%s,%13s,%13s \n", "nivel", "frequencia", "histograma");
    for (int j = 0; j < 6; j++)
    {
        printf("%d,%13d        ", j, frequencia[j]);
        for (int v = 0; v < frequencia[j]; v++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n\n\n\n ESPERO TER AJUDADO... \n\n\n\n\n");

    return 0;
}
