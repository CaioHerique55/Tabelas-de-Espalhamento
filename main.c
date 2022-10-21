/******************************************************************************

Operações com Tabelas de Espalhamento ou Hash
Espalhamento por Divisão.

Autor: Caio Henrique de Lima Marques
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int var,calc;
int cont, op;
int vet[10];


int main()

{
    
//menu - função sem retorno onde foi criada a estrutura do menu
   void menu(){
   printf("Escolha a opção: \n (1) Inserir \n (2) Exibir \n (3) Buscar \n (4) deletar \n (5) Sair \n");
   scanf("%d", &op);
   };
   
   //chamando a função menu();
   menu();
   
   // laço criado para controle de escolhas das opções do menu.
   while (op!=5){
       //
      if (op==1){
          for(int i=1; i<=10; i++){ 
        printf("Digite um valor: \n");
        scanf("%d",&var);
        calc=var%10;
        vet[calc]=var;
          }
        menu();
      } 
      
      //trecho de programa criado para exibir a tabela de espalhamento
      if (op==2){
          int imp;
          for (int i=1; i<=10; i++) {
              imp=vet[i];
            printf("posicao: %d --",i-1);
           printf("valor: %d \n",imp);   
              
          }
          menu();
      }
      
      if (op==3){
          int imp, valor;
          printf("Digite um valor a ser buscado: \n");
            scanf("%d",&valor);
            calc=valor%10;
            if(valor==vet[calc]){
                printf("Valor encontrado \n");
            }else printf("Valor nao localizado\n");
            menu();
      }
     
      if (op==4){
          int imp, valor, ver=0;
            printf("Digite um valor a ser excluido: ");
            scanf("%d",&valor);
            for (int i=1; i<=10; i++) {
                if (valor == vet[i]){
                    printf("Valor Retirado com Sucesso\n");
                    vet[i]=0;
                    ver=1;
                }
            }
            
            if(ver==0)
             printf("Valor nao localizado\n");
          }
          
       
   }
   
    return 0;
}

