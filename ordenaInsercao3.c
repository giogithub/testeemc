
// Libs
#include <stdio.h>
#include <stdlib.h>
int main(){
int k, j, aux, n, vetor;
for (k=1;k<=n-1;k++){
   printf("\n[%d] ", k);

   aux = vetor*[k];
   j = k - 1;
   while (j >= 0 && aux < vetor[j])
   {
      printf("%d, ", j);

      vetor[j + 1] = vetor[j];
      j--;
   }

   vetor[j + 1] = aux;
}
}