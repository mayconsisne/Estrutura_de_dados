#include <_mingw.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int n[50], i, m;   //declarando variaveis

    //captura e valida valor de N
    do{
    printf("Digite um numero entre 1 e 50: \n");
    scanf("%d", &m);
   }while (m <= 0 || m >= 51);

    //Ler valores e armazena em vetor N

    for(i = 0 ; i < m ; i++){
        printf("\n Digite o valor da posição %d: ", i, setlocale(LC_ALL, ""));
        scanf("%d", &n[i]);
    }
     printf("\n ---------------------------------------------");

     //imprime valores do vetor
    for(i--; i >= 0; i--){
        printf("\n O valor da posição %d é %d", i, n[i], setlocale(LC_ALL, ""));
    }
    printf("\n ------------------FIM------------------------");
}
