#include <stdio.h>
#include <math.h>
#include <time.h>

int algoritimoDemorado(int n){
    int soma = 0 ;
    for ( int i = 0; i < n ; i++){
        for ( int j = 0; j < n ; j++){
            for ( int k = 0; k < n ; k++){
                for ( int l = 0; l < n ; l++){
                        soma = i + j + k + l ;
                }
            }
        }
    } 
    return soma;
}
int main(){
     clock_t start = clock();
   
     algoritmodemorado(100);

    clock_t end = clock();
    double cpu_time_used = ((double) end-start)) / CLOCKS_PER_SEC;
    printf("Demorou %f segundos para executar \n", cpu_time_used);

  return 0;
}