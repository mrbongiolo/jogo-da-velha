/* 
   Nome: Jogo da Velha
   Versão: 1.4
   Autor: Ralf Schmitz Bongiolo
   Descricao: Jogo da Velha
   Data: 28/06/2007
   Comentarios: Qualquer bug ou problema encontrado por favor entrar em contato.

   Observação: As diagonais estao trocadas, por uma falha minha,
               acabei nomeando a diagonal principal como secundaria,
               e a secundaria como principal, o programa funciona corretamente.
*/

#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

void start();
void exibe();
void empatejg();
void jogador();
void pc();
void jogadorwin();
void pcwin();
void fim();
void tutorial();

char matv[3][3];
int matpos[3][3];
int l,c;
int op, opini, opc, opwin;
int contjg, contrand;
int empate;
int num;
int testeop, testeini, testenumwin;
int val41, val78, val96, val32;
int valtri51, valtri53, valtri57, valtri59;
int val21, val47, val89, val63;
int valcdiagprin, valcdiagsec;
int valcant1, valcant3, valcant7, valcant9;

int contpcwin=0;
int contjogadorwin=0;
int contempatejg=0;

// vetores de controle
int diagprinjog[1];
int diagprinpc[1];

int diagsecjog[1];
int diagsecpc[1];

int linhajog[3];
int linhapc[3];

int colunajog[3];
int colunapc[3];

//teste de vitoria
int testewin(int diagprinjog,int diagprinpc,int diagsecjog,int diagsecpc)
{
 int resul;
 resul=0;

 if(diagprinjog == 3){
                   jogadorwin();
                   }
 if(diagprinpc == 3){
                   pcwin();
                   }
 if(diagsecjog == 3){
                   jogadorwin();
                   }
 if(diagsecpc == 3){
                   pcwin();
                   }
 if(linhajog[0] == 3){
                jogadorwin();
                }
 if(linhajog[1] == 3){
                jogadorwin();
                }
 if(linhajog[2] == 3){
                jogadorwin();
                }
 if(linhapc[0] == 3){
                   pcwin();
                   }
 if(linhapc[1] == 3){
                   pcwin();
                   }
 if(linhapc[2] == 3){
                   pcwin();
                   }
 if(colunajog[0] == 3){
                jogadorwin();
                }
 if(colunajog[1] == 3){
                jogadorwin();
                }
 if(colunajog[2] == 3){
                jogadorwin();
                }
 if(colunapc[0] == 3){
                   pcwin();
                   }
 if(colunapc[1] == 3){
                   pcwin();
                   }
 if(colunapc[2] == 3){
                   pcwin();
                   }
 return resul=0;
}

//verifica se o numero digitado eh valido
int verop(int num)
{
 int resul;
 resul=0;
 switch(num)
            {
             case 1:
                    {
                     if(matv[2][0] == 0){
                                         return resul=-1;
                                   }
                                    else{
                                         return resul=-2;
                                         }
                     break;
                     }
             case 2:
                    {
                     if(matv[2][1] == 0){
                                         return resul=-1;
                                   }
                                    else{
                                         return resul=-2;
                                         }
                     break;
                     }
             case 3:
                    {
                     if(matv[2][2] == 0){
                                         return resul=-1;
                                   }
                                    else{
                                         return resul=-2;
                                         }
                     break;
                     }
             case 4:
                    {
                     if(matv[1][0] == 0){
                                         return resul=-1;
                                   }
                                    else{
                                         return resul=-2;
                                         }
                     break;
                     }
             case 5:
                    {
                     if(matv[1][1] == 0){
                                         return resul=-1;
                                   }
                                    else{
                                         return resul=-2;
                                         }
                     break;
                     }
             case 6:
                    {
                     if(matv[1][2] == 0){
                                         return resul=-1;
                                   }
                                    else{
                                         return resul=-2;
                                         }
                     break;
                     }
             case 7:
                    {
                     if(matv[0][0] == 0){
                                         return resul=-1;
                                   }
                                    else{
                                         return resul=-2;
                                         }
                     break;
                     }
             case 8:
                    {
                     if(matv[0][1] == 0){
                                         return resul=-1;
                                   }
                                    else{
                                         return resul=-2;
                                         }
                     break;
                     }
             case 9:
                    {
                     if(matv[0][2] == 0){
                                         return resul=-1;
                                   }
                                    else{
                                         return resul=-2;
                                         }
                     break;
                     }

             }
}

//verifica se o numero digitado no inicio eh correto
int verini(int num)
{
 int resul;
 resul=0;
 if(num > 3)
 {
  return resul=-2;
  }
   else
   {
    return resul=-1;
    }
}

//verifica se o numero digitado para sair esta correto
int vernumwin(int num)
{
 int resul;
 resul=0;
 if(num > 2)
 {
  return resul=-2;
  }
   else
   {
    return resul=-1;
    }
}


void start()
{
 system("cls");

 matv[0][0]='\0';
 matv[0][1]='\0';
 matv[0][2]='\0';
 matv[1][0]='\0';
 matv[1][1]='\0';
 matv[1][2]='\0';
 matv[2][0]='\0';
 matv[2][1]='\0';
 matv[2][2]='\0';

 diagprinjog[0]=0;
 diagprinpc[0]=0;
 diagsecjog[0]=0;
 diagsecpc[0]=0;

 linhajog[0]=0;
 linhajog[1]=0;
 linhajog[2]=0;
 linhapc[0]=0;
 linhapc[1]=0;
 linhapc[2]=0;

 colunajog[0]=0;
 colunajog[1]=0;
 colunajog[2]=0;
 colunapc[0]=0;
 colunapc[1]=0;
 colunapc[2]=0;

 opwin=0;

 printf("\nJogo da Velha");
 printf("\n\nQuem comeca jogando?");
 printf("\n\n1 - Jogador");
 printf("\n2 - PC\n\n3 - Tutorial\n\nOpcao:");
 scanf("%d", &opini);

 testeini=verini(opini);

 if(testeini == -2)
             {
              while(testeini == -2)
              {
              system("cls");
              printf("\nOPCAO INVALIDA");
              printf("\n\nJogo da Velha");
              printf("\n\nQuem comeca jogando?");
              printf("\n\n1 - Jogador");
              printf("\n2 - PC\n\n3 - Tutorial\n\nOpcao:");
              scanf("%d", &opini);
              testeini=verini(opini);
              }
             }
              else{
                   }

 if(opini == 1)
 {
  contjg=1;
  exibe();
 }
  else
   if(opini == 2)
   {
   contjg=0;
   exibe();
   }
    else
    {
     tutorial();
     }

}


void tutorial()
{
 system("cls");
 printf("\nTUTORIAL\n\n");
 printf("Bem Vindo ao Jogo da Velha by Tabajara\n\n");
 printf("Para jogar voce sera apresentado a uma tela com varios numeros:\n\n");

 matpos[0][0]=7;
 matpos[0][1]=8;
 matpos[0][2]=9;
 matpos[1][0]=4;
 matpos[1][1]=5;
 matpos[1][2]=6;
 matpos[2][0]=1;
 matpos[2][1]=2;
 matpos[2][2]=3;

 for(l=0;l<3;l++)
 {
  for(c=0;c<3;c++)
  {
   if((c==0) || (c==2))
   {
    if(matv[l][c] == 0)
                  printf(" %d ", matpos[l][c]);
     else
         printf("   ");
   }
   if(c==1)
   {
    if(matv[l][c] == 0)
                  printf("| %d |", matpos[l][c]);
     else
         printf("|   |");
   }
  }
  if((l==0) || (l==1))
            printf("\n-----------\n");
 }

 printf("\n\nOs numeros acima indicam a posicao em que deseja jogar.\n");
 printf("Exemplo. Se digitar 5, o marcador 'x' ira aparecer onde o numero 5 estava.\n\n");
 printf("   |   |   \n");
 printf("-----------\n");
 printf("   | x |   \n");
 printf("-----------\n");
 printf("   |   |   \n");

 printf("\n\n\n");

 system("pause");
 start();
}


void exibe()
{
 system("cls");
 printf("\n");
 printf("VITORIAS\n");
 printf("\nJogador( x ) %d || %d ( o )PC", contjogadorwin, contpcwin);
 printf("\n\nEmpates: %d\n\n", contempatejg);

 for(l=0;l<3;l++)
 {
  for(c=0;c<3;c++)
  {
   if((c==0) || (c==2))
             printf(" %c ", matv[l][c]);
   if(c==1)
           printf("| %c |", matv[l][c]);
  }
  if((l==0) || (l==1))
            printf("\n-----------\n");
 }

 opwin=testewin(diagprinjog[0], diagprinpc[0], diagsecjog[0], diagsecpc[0]);

 empate=0;
 for(l=0;l<=2;l++)
  for(c=0;c<=2;c++)
   if(matv[l][c] != 0)
                 empate=empate+1;

 if(empate == 9)
           empatejg();

 contjg=contjg+1;
 if(contjg % 2 == 0)
           jogador();
 if(contjg % 2 != 0)
           pc();

}


void empatejg()
{
 system("cls");
 printf("\nFim do Jogo\n\n");
              for(l=0;l<3;l++)
              {
               for(c=0;c<3;c++)
                {
                 if((c==0) || (c==2))
                           printf(" %c ", matv[l][c]);
                 if(c==1)
                         printf("| %c |", matv[l][c]);
                }
                if((l==0) || (l==1))
                          printf("\n-----------\n");
               }
 contempatejg=contempatejg+1;
 printf("\n\nEmpate!!");
 printf("\n\nDeseja Jogar Novamente?");
 printf("\n\n1 - Sim\n2 - Nao\n\nOpcao:");
 scanf("%d", &opc);

 testenumwin=vernumwin(opc);
 if(testenumwin == -2)
             {
              while(testenumwin == -2)
              {
              system("cls");
              printf("\nOPCAO INVALIDA");
              printf("\n\nEmpate!!");
              printf("\n\nDeseja Jogar Novamente?");
              printf("\n\n1 - Sim\n2 - Nao\n\nOpcao:");
              scanf("%d", &opc);
              testenumwin=vernumwin(opc);
              }
             }
              else{
                   }

 if(opc == 1)
        start();
 if(opc == 2)
        fim();
}


void jogadorwin()
{
 system("cls");
 printf("\nFim do Jogo\n\n");
              for(l=0;l<3;l++)
              {
               for(c=0;c<3;c++)
                {
                 if((c==0) || (c==2))
                           printf(" %c ", matv[l][c]);
                 if(c==1)
                         printf("| %c |", matv[l][c]);
                }
                if((l==0) || (l==1))
                          printf("\n-----------\n");
               }
 contjogadorwin=contjogadorwin+1;
 printf("\n\nParabens Voce Venceu!!");
 printf("\n\nDeseja Jogar Novamente?");
 printf("\n\n1 - Sim\n2 - Nao\n\nOpcao:");
 scanf("%d", &opc);

 testenumwin=vernumwin(opc);
 if(testenumwin == -2)
             {
              while(testenumwin == -2)
              {
              system("cls");
              printf("\nOPCAO INVALIDA");
              printf("\n\nParabens Voce Venceu!!");
              printf("\n\nDeseja Jogar Novamente?");
              printf("\n\n1 - Sim\n2 - Nao\n\nOpcao:");
              scanf("%d", &opc);
              testenumwin=vernumwin(opc);
              }
             }
              else{
                   }

 if(opc == 1)
        start();
 if(opc == 2)
        fim();
}


void pcwin()
{
 system("cls");
 printf("\nFim do Jogo\n\n");
              for(l=0;l<3;l++)
              {
               for(c=0;c<3;c++)
                {
                 if((c==0) || (c==2))
                           printf(" %c ", matv[l][c]);
                 if(c==1)
                         printf("| %c |", matv[l][c]);
                }
                if((l==0) || (l==1))
                          printf("\n-----------\n");
               }
 contpcwin=contpcwin+1;
 printf("\n\nPC Venceu!!");
 printf("\n\nDeseja Jogar Novamente?");
 printf("\n\n1 - Sim\n2 - Nao\n\nOpcao:");
 scanf("%d", &opc);

 testenumwin=vernumwin(opc);
 if(testenumwin == -2)
             {
              while(testenumwin == -2)
              {
              system("cls");
              printf("\nOPCAO INVALIDA");
              printf("\n\nPC Venceu!!");
              printf("\n\nDeseja Jogar Novamente?");
              printf("\n\n1 - Sim\n2 - Nao\n\nOpcao:");
              scanf("%d", &opc);
              testenumwin=vernumwin(opc);
              }
             }
              else{
                   }

 if(opc == 1)
        start();
 if(opc == 2)
        fim();
}


void fim()
{
 system("cls");
 printf("\n\t\t\t       VITORIAS");
 printf("\n\n\t\t\tJogador: %d :||: %d :PC", contjogadorwin, contpcwin);
 printf("\n\n\t\t\t      Empates: %d\n\n", contempatejg);
 printf("\n\n\t\tQualquer problema encontrado por avor entrar em contato.");
 system("pause");
 exit(0);
}


void jogador()
{
matpos[0][0]=7;
matpos[0][1]=8;
matpos[0][2]=9;
matpos[1][0]=4;
matpos[1][1]=5;
matpos[1][2]=6;
matpos[2][0]=1;
matpos[2][1]=2;
matpos[2][2]=3;

 printf("\n\nJogador\n\n");

 for(l=0;l<3;l++)
 {
  for(c=0;c<3;c++)
  {
   if((c==0) || (c==2))
   {
    if(matv[l][c] == 0)
                  printf(" %d ", matpos[l][c]);
     else
         printf("   ");
   }
   if(c==1)
   {
    if(matv[l][c] == 0)
                  printf("| %d |", matpos[l][c]);
     else
         printf("|   |");
   }
  }
  if((l==0) || (l==1))
            printf("\n-----------\n");
 }

 printf("\n\nFaca Sua Jogada:");
 scanf("%d", &op);

 testeop=verop(op);

 if(testeop == -2)
            {
             while(testeop == -2)
             {
              system("cls");
              printf("\nOpcao Invalida!\n\n");
              for(l=0;l<3;l++)
              {
               for(c=0;c<3;c++)
                {
                 if((c==0) || (c==2))
                           printf(" %c ", matv[l][c]);
                 if(c==1)
                         printf("| %c |", matv[l][c]);
                }
                if((l==0) || (l==1))
                          printf("\n-----------\n");
               }

               printf("\n\nJogador\n\n");

               for(l=0;l<3;l++)
               {
                for(c=0;c<3;c++)
                {
                 if((c==0) || (c==2))
                 {
                  if(matv[l][c] == 0)
                                printf(" %d ", matpos[l][c]);
                   else
                       printf("   ");
                 }
                 if(c==1)
                 {
                  if(matv[l][c] == 0)
                                printf("| %d |", matpos[l][c]);
                   else
                       printf("|   |");
                 }
                }
                if((l==0) || (l==1))
                          printf("\n-----------\n");
               }
                printf("\n\nFaca Sua Jogada:");
                scanf("%d", &op);
                testeop=verop(op);
             }
            }
              else{
                   }

 switch(op)
 {
  case 1:
         {
          matv[2][0]='x';
          diagprinjog[0]=diagprinjog[0]+1;
          linhajog[2]=linhajog[2]+1;
          colunajog[0]=colunajog[0]+1;
         }
  break;
  case 2:
         {
          matv[2][1]='x';
          linhajog[2]=linhajog[2]+1;
          colunajog[1]=colunajog[1]+1;
         }
  break;
  case 3:
         {
          matv[2][2]='x';
          diagsecjog[0]=diagsecjog[0]+1;
          linhajog[2]=linhajog[2]+1;
          colunajog[2]=colunajog[2]+1;
         }
  break;
  case 4:
         {
          matv[1][0]='x';
          linhajog[1]=linhajog[1]+1;
          colunajog[0]=colunajog[0]+1;
         }
  break;
  case 5:
         {
          matv[1][1]='x';
          diagsecjog[0]=diagsecjog[0]+1;
          diagprinjog[0]=diagprinjog[0]+1;
          linhajog[1]=linhajog[1]+1;
          colunajog[1]=colunajog[1]+1;
         }
  break;
  case 6:
         {
          matv[1][2]='x';
          linhajog[1]=linhajog[1]+1;
          colunajog[2]=colunajog[2]+1;
         }
  break;
  case 7:
         {
          matv[0][0]='x';
          diagsecjog[0]=diagsecjog[0]+1;
          linhajog[0]=linhajog[0]+1;
          colunajog[0]=colunajog[0]+1;
         }
  break;
  case 8:
         {
          matv[0][1]='x';
          linhajog[0]=linhajog[0]+1;
          colunajog[1]=colunajog[1]+1;
         }
  break;
  case 9:
         {
          matv[0][2]='x';
          diagprinjog[0]=diagprinjog[0]+1;
          linhajog[0]=linhajog[0]+1;
          colunajog[2]=colunajog[2]+1;
         }
  break;
  default:
          {
           system("cls");
           printf("\nOpcao Invalida!\n\n");
              for(l=0;l<3;l++)
              {
               for(c=0;c<3;c++)
                {
                 if((c==0) || (c==2))
                           printf(" %c ", matv[l][c]);
                 if(c==1)
                         printf("| %c |", matv[l][c]);
                }
                if((l==0) || (l==1))
                          printf("\n-----------\n");
               }
           jogador();
           }
  break;
}
 exibe();
}


void pc()
{
 //1° verificar se o pc pode ganhar

 //verifica diagonal principal
 if(diagprinpc[0] == 2)
 {
  if(matv[0][2] == 0)
                {
                matv[0][2]='o';
                diagprinpc[0]=diagprinpc[0]+1;
                linhapc[0]=linhapc[0]+1;
                colunapc[2]=colunapc[2]+1;
                exibe();
                }
  if(matv[1][1] == 0)
                {
                matv[1][1]='o';
                diagprinpc[0]=diagprinpc[0]+1;
                linhapc[1]=linhapc[1]+1;
                colunapc[1]=colunapc[1]+1;
                exibe();
                }
  if(matv[2][0] == 0)
                {
                matv[2][0]='o';
                diagprinpc[0]=diagprinpc[0]+1;
                linhapc[2]=linhapc[2]+1;
                colunapc[0]=colunapc[0]+1;
                exibe();
                }
 }

 //verifica diagonal secundaria
 if(diagsecpc[0] == 2)
 {
  if(matv[0][0] == 0)
                {
                matv[0][0]='o';
                diagsecpc[0]=diagsecpc[0]+1;
                linhapc[0]=linhapc[0]+1;
                colunapc[0]=colunapc[0]+1;
                exibe();
                }
  if(matv[1][1] == 0)
                {
                matv[1][1]='o';
                diagprinpc[0]=diagprinpc[0]+1;
                diagsecpc[0]=diagsecpc[0]+1;
                linhapc[1]=linhapc[1]+1;
                colunapc[1]=colunapc[1]+1;
                exibe();
                }
  if(matv[2][2] == 0)
                {
                matv[2][2]='o';
                diagsecpc[0]=diagsecpc[0]+1;
                linhapc[2]=linhapc[2]+1;
                colunapc[2]=colunapc[2]+1;
                exibe();
                }
 }

 //verifica linhas
 for(l=0;l<=2;l++)
 {
  if(linhapc[l] == 2)
  {
   for(c=0;c<=2;c++)
   {
    if(matv[l][c] == 0)
    {
     matv[l][c]='o';
     linhapc[l]=linhapc[l]+1;
     colunapc[c]=colunapc[c]+1;
     if((l==0)&&(c==0)){
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
     if((l==0)&&(c==2)){
                        diagprinpc[0]=diagprinpc[0]+1;
                       }
     if((l==1)&&(c==1)){
                        diagprinpc[0]=diagprinpc[0]+1;
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
     if((l==2)&&(c==0)){
                        diagprinpc[0]=diagprinpc[0]+1;
                       }
     if((l==2)&&(c==2)){
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
    exibe();
    }
   }
  }
 }

 //verifica colunas
 for(c=0;c<=2;c++)
 {
  if(colunapc[c] == 2)
  {
   for(l=0;l<=2;l++)
   {
    if(matv[l][c] == 0)
    {
     matv[l][c]='o';
     linhapc[l]=linhapc[l]+1;
     colunapc[c]=colunapc[c]+1;
     if((l==0)&&(c==0)){
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
     if((l==0)&&(c==2)){
                        diagprinpc[0]=diagprinpc[0]+1;
                       }
     if((l==1)&&(c==1)){
                        diagprinpc[0]=diagprinpc[0]+1;
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
     if((l==2)&&(c==0)){
                        diagprinpc[0]=diagprinpc[0]+1;
                       }
     if((l==2)&&(c==2)){
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
    exibe();
    }
   }
  }
 }

 //2° Verificar se o PC pode perder

 //verifica diagonal principal
 if(diagprinjog[0] == 2)
 {
  if(matv[0][2] == 0)
                {
                matv[0][2]='o';
                diagprinpc[0]=diagprinpc[0]+1;
                linhapc[0]=linhapc[0]+1;
                colunapc[2]=colunapc[2]+1;
                exibe();
                }
  if(matv[1][1] == 0)
                {
                matv[1][1]='o';
                diagprinpc[0]=diagprinpc[0]+1;
                linhapc[1]=linhapc[1]+1;
                colunapc[1]=colunapc[1]+1;
                exibe();
                }
  if(matv[2][0] == 0)
                {
                matv[2][0]='o';
                diagprinpc[0]=diagprinpc[0]+1;
                linhapc[2]=linhapc[2]+1;
                colunapc[0]=colunapc[0]+1;
                exibe();
                }
 }

 //verifica diagonal secundaria
 if(diagsecjog[0] == 2)
 {
  if(matv[0][0] == 0)
                {
                matv[0][0]='o';
                diagsecpc[0]=diagsecpc[0]+1;
                linhapc[0]=linhapc[0]+1;
                colunapc[0]=colunapc[0]+1;
                exibe();
                }
  if(matv[1][1] == 0)
                {
                matv[1][1]='o';
                diagprinpc[0]=diagprinpc[0]+1;
                diagsecpc[0]=diagsecpc[0]+1;
                linhapc[1]=linhapc[1]+1;
                colunapc[1]=colunapc[1]+1;
                exibe();
                }
  if(matv[2][2] == 0)
                {
                matv[2][2]='o';
                diagsecpc[0]=diagsecpc[0]+1;
                linhapc[2]=linhapc[2]+1;
                colunapc[2]=colunapc[2]+1;
                exibe();
                }
 }

 //verifica linhas
 for(l=0;l<=2;l++)
 {
  if(linhajog[l] == 2)
  {
   for(c=0;c<=2;c++)
   {
    if(matv[l][c] == 0)
    {
     matv[l][c]='o';
     linhapc[l]=linhapc[l]+1;
     colunapc[c]=colunapc[c]+1;
     if((l==0)&&(c==0)){
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
     if((l==0)&&(c==2)){
                        diagprinpc[0]=diagprinpc[0]+1;
                       }
     if((l==1)&&(c==1)){
                        diagprinpc[0]=diagprinpc[0]+1;
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
     if((l==2)&&(c==0)){
                        diagprinpc[0]=diagprinpc[0]+1;
                       }
     if((l==2)&&(c==2)){
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
     exibe();
    }
   }
  }
 }

 //verifica colunas
 for(c=0;c<=2;c++)
 {
  if(colunajog[c] == 2)
  {
   for(l=0;l<=2;l++)
   {
    if(matv[l][c] == 0)
    {
     matv[l][c]='o';
     linhapc[l]=linhapc[l]+1;
     colunapc[c]=colunapc[c]+1;
     if((l==0)&&(c==0)){
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
     if((l==0)&&(c==2)){
                        diagprinpc[0]=diagprinpc[0]+1;
                       }
     if((l==1)&&(c==1)){
                        diagprinpc[0]=diagprinpc[0]+1;
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
     if((l==2)&&(c==0)){
                        diagprinpc[0]=diagprinpc[0]+1;
                       }
     if((l==2)&&(c==2)){
                        diagsecpc[0]=diagsecpc[0]+1;
                       }
     exibe();
    }
   }
  }
 }

 //jogada inicial

 //jogada inicial do pc, jogar em algum dos cantos
 if(((linhajog[0] == 0) && (linhajog[1] == 0) && (linhajog[2] == 0)) ||
    ((linhapc[0] == 0) && (linhapc[1] == 0) && (linhapc[2] == 0) && (matv[1][1] == 'x')))
 {
  num=rand() % 4;
  if(num == 0)
         {
         //joga em 9
         matv[0][2]='o';
         diagprinpc[0]=diagprinpc[0]+1;
         linhapc[0]=linhapc[0]+1;
         colunapc[2]=colunapc[2]+1;
         exibe();
         }
  if(num == 1)
         {
         //joga em 1
         matv[2][0]='o';
         diagprinpc[0]=diagprinpc[0]+1;
         linhapc[2]=linhapc[2]+1;
         colunapc[0]=colunapc[0]+1;
         exibe();
         }
  if(num == 2)
         {
          //joga em 7
          matv[0][0]='o';
          diagsecpc[0]=diagsecpc[0]+1;
          linhapc[0]=linhapc[0]+1;
          colunapc[0]=colunapc[0]+1;
          exibe();
          }
  if(num == 3)
         {
          //joga em 3
          matv[2][2]='o';
          diagsecpc[0]=diagsecpc[0]+1;
          linhapc[2]=linhapc[2]+1;
          colunapc[2]=colunapc[2]+1;
          exibe();
          }
 }

 //joga em 5
 if(matv[1][1] == 0)
 {
  matv[1][1]='o';
  diagsecpc[0]=diagsecpc[0]+1;
  diagprinpc[0]=diagprinpc[0]+1;
  linhapc[1]=linhapc[1]+1;
  colunapc[1]=colunapc[1]+1;
  exibe();
 }

 //validar jogadas random

 //defender canto 1
 valcant1=0;
 if((matv[1][0] == 'x') && (matv[2][1] == 'x') && (matv[2][0] == 0) && (matv[0][0] == 0) && (matv[2][2] == 0))
                valcant1=-1;
 //defender canto 3
 valcant3=0;
 if((matv[2][1] == 'x') && (matv[1][2] == 'x') && (matv[2][2] == 0) && (matv[2][0] == 0) && (matv[0][2] == 0))
                valcant3=-1;
 //defender canto 7
 valcant7=0;
 if((matv[0][1] == 'x') && (matv[1][0] == 'x') && (matv[0][0] == 0) && (matv[2][0] == 0) && (matv[0][2] == 0))
                valcant7=-1;
 //defender canto 9
 valcant9=0;
 if((matv[0][1] == 'x') && (matv[1][2] == 'x') && (matv[0][2] == 0) && (matv[0][0] == 0) && (matv[2][2] == 0))
                valcant9=-1;

 //defesa de ataque pelos cantos da diagonal prin
 valcdiagprin=0;
 if((matv[0][2] == 'x') && (matv[1][1] == 'o') && (matv[2][0] == 'x'))
                valcdiagprin=-1;
 //defender de ataque pelos cantos da diagonal sec
 valcdiagsec=0;
 if((matv[0][0] == 'x') && (matv[1][1] == 'o') && (matv[2][2] == 'x'))
                valcdiagsec=-1;

 val41=0;
 if((matv[0][0] == 'x') && (matv[1][2] == 'x') && (matv[0][2] == 0) && (matv[1][1] == 'o') && (matv[2][2] == 0))
                val41=-1;
 val78=0;
 if((matv[0][2] == 'x') && (matv[2][1] == 'x') && (matv[2][2] == 0) && (matv[1][1] == 'o') && (matv[2][0] == 0))
                val78=-1;
 val96=0;
 if((matv[2][2] == 'x') && (matv[1][0] == 'x') && (matv[2][0] == 0) && (matv[1][1] == 'o') && (matv[0][0] == 0))
                val96=-1;
 val32=0;
 if((matv[2][0] == 'x') && (matv[0][1] == 'x') && (matv[0][0] == 0) && (matv[1][1] == 'o') && (matv[0][2] == 0))
                val32=-1;
 val21=0;
 if((matv[2][2] == 'x') && (matv[0][1] == 'x') && (matv[0][2] == 0) && (matv[1][1] == 'o') && (matv[0][0] == 0))
                val21=-1;
 val47=0;
 if((matv[2][0] == 'x') && (matv[1][2] == 'x') && (matv[2][2] == 0) && (matv[1][1] == 'o') && (matv[0][2] == 0))
                val47=-1;
 val89=0;
 if((matv[0][0] == 'x') && (matv[2][1] == 'x') && (matv[2][0] == 0) && (matv[1][1] == 'o') && (matv[2][2] == 0))
                val89=-1;
 val63=0;
 if((matv[0][2] == 'x') && (matv[1][0] == 'x') && (matv[0][0] == 0) && (matv[1][1] == 'o') && (matv[2][0] == 0))
                val63=-1;

 valtri51=0;
 if((matv[1][1] == 'x') && (matv[2][0] == 'x') && (matv[2][2] == 0))
                valtri51=-1;
 valtri53=0;
 if((matv[1][1] == 'x') && (matv[2][2] == 'x') && (matv[2][0] == 0))
                valtri53=-1;
 valtri57=0;
 if((matv[1][1] == 'x') && (matv[0][0] == 'x') && (matv[0][2] == 0))
                valtri57=-1;
 valtri59=0;
 if((matv[1][1] == 'x') && (matv[0][2] == 'x') && (matv[0][0] == 0))
                valtri59=-1;

 //inicio de jogadas random

 contrand=-1;
 while(contrand == -1)
 {
  num=rand() % 8;
   if((num == 0) && (val78 == 0) && (val47 == 0) && (valcdiagprin == 0) && (valcant3 == 0))
  {
  //joga em 7
 if(matv[0][0] == 0)
 {
  matv[0][0]='o';
  diagsecpc[0]=diagsecpc[0]+1;
  linhapc[0]=linhapc[0]+1;
  colunapc[0]=colunapc[0]+1;
  exibe();
 }
 }
   if((num == 1) && (val32 == 0) && (val63 == 0) && (valcdiagprin == 0) && (valcant7 == 0))
  {
  //joga em 3
 if(matv[2][2] == 0)
 {
  matv[2][2]='o';
  diagsecpc[0]=diagsecpc[0]+1;
  linhapc[2]=linhapc[2]+1;
  colunapc[2]=colunapc[2]+1;
  exibe();
 }
 }
   if((num == 2) && (val96 == 0) && (val89 == 0) && (valcdiagsec == 0) && (valcant1 == 0))
  {
  //joga em 9
 if(matv[0][2] == 0)
 {
  matv[0][2]='o';
  diagprinpc[0]=diagprinpc[0]+1;
  linhapc[0]=linhapc[0]+1;
  colunapc[2]=colunapc[2]+1;
  exibe();
 }
 }
   if((num == 3) && (val41 == 0) && (val21 == 0) && (valcdiagsec == 0) && (valcant9 == 0))
  {
  //joga em 1
 if(matv[2][0] == 0)
 {
  matv[2][0]='o';
  diagprinpc[0]=diagprinpc[0]+1;
  linhapc[2]=linhapc[2]+1;
  colunapc[0]=colunapc[0]+1;
  exibe();
 }
 }
    if((num == 4) && (val32 == 0) && (valtri51 == 0) && (valtri53 == 0) &&
       (valtri57 == 0) && (valtri59 == 0) && (val21 == 0) && (valcant7 == 0) && (valcant9 == 0))
  {
  //joga em 2
 if(matv[2][1] == 0)
 {
  matv[2][1]='o';
  linhapc[2]=linhapc[2]+1;
  colunapc[1]=colunapc[1]+1;
  exibe();
 }
 }
   if((num == 5) && (val96 == 0) && (valtri51 == 0) && (valtri53 == 0) &&
      (valtri57 == 0) && (valtri59 == 0) && (val63 == 0) && (valcant7 == 0) && (valcant7 == 0))
  {
  //joga em 6
 if(matv[1][2] == 0)
 {
  matv[1][2]='o';
  linhapc[1]=linhapc[1]+1;
  colunapc[2]=colunapc[2]+1;
  exibe();
 }
 }
   if((num == 6) && (val41 == 0) && (valtri51 == 0) && (valtri53 == 0) &&
      (valtri57 == 0) && (valtri59 == 0) && (val47 == 0) && (valcant3 == 0) && (valcant9 == 0))
  {
  //joga em 4
 if(matv[1][0] == 0)
 {
  matv[1][0]='o';
  linhapc[1]=linhapc[1]+1;
  colunapc[0]=colunapc[0]+1;
  exibe();
 }
 }
   if((num == 7) && (val78 == 0) && (valtri51 == 0) && (valtri53 == 0) &&
      (valtri57 == 0) && (valtri59 == 0) && (val89 == 0) && (valcant7 == 0) && (valcant3 == 0))
  {
  //joga em 8
 if(matv[0][1] == 0)
 {
  matv[0][1]='o';
  linhapc[0]=linhapc[0]+1;
  colunapc[1]=colunapc[1]+1;
  exibe();
 }
 }
 contrand=-1;
 }

}

int main()
{
      system("CLS");

      start();

      return 0;
}
