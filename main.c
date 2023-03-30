#include <stdio.h>
#include <locale.h> //Para resolver o problema de acentuação no terminal do windows usando o comando de regionalização

int main()
{
    int opcao,i;
    float num[2];

   // inicialização com o menu para escolha da operação
    do
    {
        printf("\n\n BEM - VINDO AO PROGRAMA DE OPERAÇÕES ARITIMÉTICAS\n\nESCOLHA UMA DAS" 
       " OPÇÕES PARA INICAR:\n\n");

       printf( "=================================\n");
       printf("|  0 - sair                     | \n");
       printf("|  1 - Operação SOMA !.         | \n");
       printf("|  2 - Operação SUBTRAÇÃO !.    | \n");
       printf("|  3 - Operação MUTIPLICAÇÃO !. | \n");
       printf("|  4 - Operação DIVISÃO !.      | \n");
      printf( "=================================\n\n");
        scanf("%d", &opcao);

    
      // opçao de saída da calculador
      
        if(opcao==0){
            printf("Saindo...");
            break;}
        printf("OPCÃO %c ESCOLHIDA COM SUCESSO\n\n", opcao);
        for (i = 0; i < 2; i++)
        {
            printf("Digite um valor: ");
            scanf("%f", &num[i]);
        }

      // estrutura de decisão para escolha da operação
        switch (opcao)
        {
          // opção de soma com dois vetores
          
        case 1:
            printf("\nVocê escolheu Soma\n");
            printf("\nSoma: %.2f", num[0] + num[1]);

            break;
          // opção de subtração com dois vetores
          
        case 2:
            printf("\nVocê escolheu Subtração\n");
            printf("Subtração: %.2f", num[0] - num[1]);

            break;
          // opção de mutiplicação com dois vetores
          
        case 3:
            printf("\nMultiplicação\n");
            
            printf("Multiplicação: %.2f", num[0] * num[1]);
            break;
          // opção de divisão com dois vetores, com indicador quando o  denominador for zero.
        case 4:
            printf("\nDivisão\n");
            while (num[1] == 0)
            {
                printf("Nao existe divisao por zero!\n Digite outro valor: ");
                scanf("%f", &num[1]);
            }
            printf("Divisao: %.2f\n", num[0] / num[1]);
            break;
           // indicador de opção inválida   
        default:
            printf("OPÇÃO INVÁLIDA, valores de 0 á 1, por favor escolha apenas um deles!!");

            break;
        }
    } while (1);

    return 0;
}