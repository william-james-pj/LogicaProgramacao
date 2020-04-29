#include <stdio.h>

void imprimeTab(char positionFun[])
{
  printf("*****************\n");
  printf("  %c  |  %c  |  %c  \n", positionFun[0], positionFun[1], positionFun[2]);
  printf("-----------------\n");
  printf("  %c  |  %c  |  %c  \n", positionFun[3], positionFun[4], positionFun[5]);
  printf("-----------------\n");
  printf("  %c  |  %c  |  %c  \n", positionFun[6], positionFun[7], positionFun[8]);
  printf("*****************\n\n");
  return;
}

void imprimeJogador(char XorOFun, int *casaFun)
{
  int temp, tempCont = 1;
  do
  {
    fflush(stdin);
    printf("Jogador %c - Escolha o local: ", XorOFun);
    scanf(" %d", &temp);
    printf("\n\n");
    if((temp >= 1) && (temp <= 9))
    {
      *casaFun = temp - 1;
      tempCont = 0;
    } else
    {
      printf("Comando invalido!!!!!! \n");
      temp = 0;
    } 
  } while (tempCont == 1);
  return;
}

int testarCasa(char positionFun[], int casaFun)
{
  if((positionFun[casaFun] == 'X') || (positionFun[casaFun] == 'O'))
  {
    printf("Posicao ja escolida, escolha outra \n");
    return 1;
  } else
  {
    printf("Posicao escolhida com sucesso \n");
    return 0;
  }
}

void trocarJogador(char *XorOFun)
{
  if (*XorOFun == 'X')
  {
    *XorOFun = 'O';
  }else
  {
    *XorOFun = 'X';
  }
  return;
}

int testarJogada(char positionFun[])
{
  if(((positionFun[0] == 'X') && (positionFun[1] == 'X') && (positionFun[2] == 'X')) 
      || ((positionFun[0] == 'O') && (positionFun[1] == 'O') && (positionFun[2] == 'O')))
  {
    return 0;
  } else if(((positionFun[3] == 'X') && (positionFun[4] == 'X') && (positionFun[5] == 'X')) 
              || ((positionFun[3] == 'O') && (positionFun[4] == 'O') && (positionFun[5] == 'O')))
  {
    return 0;
  } else if(((positionFun[6] == 'X') && (positionFun[7] == 'X') && (positionFun[8] == 'X')) 
              || ((positionFun[6] == 'O') && (positionFun[7] == 'O') && (positionFun[8] == 'O')))
  {
    return 0;
  } else if(((positionFun[0] == 'X') && (positionFun[3] == 'X') && (positionFun[6] == 'X')) 
              || ((positionFun[0] == 'O') && (positionFun[3] == 'O') && (positionFun[6] == 'O')))
  {
    return 0;
  } else if(((positionFun[1] == 'X') && (positionFun[4] == 'X') && (positionFun[7] == 'X')) 
              || ((positionFun[1] == 'O') && (positionFun[4] == 'O') && (positionFun[7] == 'O')))
  {
    return 0;
  } else if(((positionFun[2] == 'X') && (positionFun[5] == 'X') && (positionFun[8] == 'X')) 
              || ((positionFun[2] == 'O') && (positionFun[5] == 'O') && (positionFun[8] == 'O')))
  {
    return 0;
  } else if(((positionFun[0] == 'X') && (positionFun[4] == 'X') && (positionFun[8] == 'X')) 
              || ((positionFun[0] == 'O') && (positionFun[4] == 'O') && (positionFun[8] == 'O')))
  {
    return 0;
  } else if(((positionFun[2] == 'X') && (positionFun[4] == 'X') && (positionFun[6] == 'X')) 
              || ((positionFun[2] == 'O') && (positionFun[4] == 'O') && (positionFun[6] == 'O')))
  {
    return 0;
  } else
  {
    return 1;
  }
}

void limpaTela()
{
  int cont;
  for (cont = 0; cont < 30; cont++)
  {
    printf("\n");
  }
  
}

void limpaVariaveis(char *pgFimFun, int *casaFun)
{
  *pgFimFun = 'y';
  *casaFun = 0;
}

int main()
{
  // Declaracao das variaveis
  char position[9] = {' '};
  char XorO = 'X', pgFim;
  int casa, varTemporaria, cont ,temp;

	// Declaracao das funcoes
  void imprimeTab(char positionFun[]);
  void imprimeJogador(char XorOFun, int *casaFun);
  int testarCasa(char positionFun[], int casaFun);
  void trocarJogador(char *XorOFun);
  int testarJogada(char positionFun[]);
  void limpaTela();
  void limpaVariaveis(char *pgFimFun, int *casaFun);

  // Inico do codigo
  do
  {
    limpaVariaveis(&pgFim, &casa);
    for (cont = 0; cont < 9; cont++)
    {
      position[cont] = ' ';
    }
    for(cont = 0; cont < 9; cont++)
    {
      varTemporaria = 1;
      while(varTemporaria == 1)
      {
        imprimeTab(position);
        limpaTela();
        imprimeJogador(XorO, &casa);
        varTemporaria = testarCasa(position, casa);
      }
      position[casa] = XorO;
      
      if (testarJogada(position) == 1)
      {
        trocarJogador(&XorO);
        temp = 0;
      } else if(testarJogada(position) == 0)
      {
        //limpaTela();
        imprimeTab(position);
        printf("Jogador %c venceu o jogo \n", XorO);
        printf("Fiiim \n");
        cont = 9;
        temp = 1;
      }
    }

    if (temp == 0)
    {
      //limpaTela();
      imprimeTab(position);
      printf("Deu velha \n");
      printf("Fiiim \n");
    }
    printf("Deseja jogar novamente? Digite a tecla 'y' caso sim ou 'n' caso nao ");
    scanf(" %c", &pgFim);
  } while (pgFim == 'y');
    
	return 0;
}


