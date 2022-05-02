#include <stdio.h>
#include <stdlib.h>
#include "aluno.c"


typedef struct node {
    Aluno A;
    struct node* esq;
    struct node* dir;
}*No;

typedef No noRaiz;

noRaiz criarArvore();
noRaiz criarArvores(Aluno);
void niveliter(noRaiz r);



int main(){
      
    No raiz = malloc ( sizeof ( struct node));
    raiz-> esq = 0 ;
    raiz-> dir = 0 ;
    raiz-> A = NULL;
     
    Aluno B = criarAluno ( 12 , " Francisco \0 " , 9.);
    Aluno C = criarAluno ( 15 , " Pedro \0 " , 8.);
    Aluno D = criarAluno ( 8 , " Henrique \0 " , 7.);

    noRaiz r = criarArvore();
   void niveliter(noRaiz r);
   noRaiz noRaiz = criarArvores (C);
    noRaiz-> dir = criarArvores (B);
    noRaiz-> esq = criarArvores (D);
   
   

    return 0;
}


noRaiz criarArvore(){
    noRaiz raiz = (No)malloc(sizeof(struct node));
    raiz -> A = NULL;
    raiz-> dir = 0;
    raiz -> esq = 0;
    return raiz;
}


noRaiz criarArvores(Aluno A){
 
    noRaiz raiz = (No)malloc(sizeof(struct node)); 
    raiz->A = A;
    raiz->dir = 0; 
    raiz->esq = 0;
    return raiz;
}


void niveliter(noRaiz r){
    int i,tamanho;
    Aluno A,B,C,D;
    
    noRaiz raiz= r;
    printf("informe o tamanho da raiz");
    scanf("%d",&tamanho);
    if (raiz != 0)
    {
        for ( i = 0; i < tamanho; i++)
        {
            raiz->esq=0;
            raiz->dir=0;
        }
        
    }
    
  printf("%p %p %p %p ",A,B,C,D);  
}