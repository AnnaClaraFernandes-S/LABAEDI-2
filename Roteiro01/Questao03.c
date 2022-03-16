#include <stdio.h>
#include <string.h>
 
int palindromo(char palavra[], int TV, int posicao) {
 
    if (posicao < TV / 2){
        if (palavra[posicao] == palavra[TV - posicao - 1]){ //aqui ela diminuirar um numero para que ele começe a analisar o vetor da posiçao 0 pois o vetor começa do 0 e nao do 1
			return 1 * palindromo(palavra, TV, posicao+1);//ja essa serve para que o progama depois de analisar o primeiro numero ele prociga adiante para analisar um por um ate chegar ao fim .
		}
        else{
			return 0; // caso ele der verdadeiro ele continuara analisando o codigo um por um caso nao ele ja ira parar pois sabera que ele nao e um palindromo .
		}
	}
    else{
		return 1;
	}
}
 
int main() {
 
   char palavra[100];
   int TV;
 
   printf ("Digite a palavra: \n");   
   gets(palavra); // a funçao gets ela irar ler a palavra que foi digitada pelo usuario parecido com o scanf 
 
   TV = strlen(palavra); // essa funçao ela retornara a quantidade de caracteres que tera na string que o usuario digitar
 
   if (palindromo(palavra, TV, 0)) // aqui a funçao palindromo sera chamada onde ja estara com suas variaveis preenchidas e dada a posiçao inicial para começar a se comparar que no caso e a posiçao 0 que e o primeiro valor do vetor .
      printf("E um palindromo\n");
   else
      printf("Nao e palindromo\n");
 
   return 0;
}