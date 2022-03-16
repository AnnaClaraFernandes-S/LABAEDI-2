 #include <stdlib.h>
 #include <stdio.h>

int fatorial(int n){

    if (n < 2 ){
        return 1;
    }
    else {
        return  n*fatorial(n - 1) ;
    }
}
 

  int main () {
     int resultado;
     resultado = fatorial(5);
     printf("O resultado da funçao fatorial : %d\n",resultado);
  

return 0;
 }

