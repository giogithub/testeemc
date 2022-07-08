#include <stdio.h>
#include <stdlib.h>

void insercao(int *vet, int tam)
{
    int i, j, x;
    for (i = 2; i <= tam; i++)
    {
        x = vet[i];
        j = i - 1;
        vet[0] = x;
        while (x < vet[j])
        {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = x;
    }
}
void main (){
insercao (6,4);
int ins=insercao;
//printf(ins);
return;
}
