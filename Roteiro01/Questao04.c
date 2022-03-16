#include <stdio.h>
#include <stdlib.h>



  int fatorial(int n)
{
    if(n < 2) {
    return 1;
    }
    else return(n*fatorial(n-1));
}

int binomial( int n, int k){

if(n==0 && k ==0){
 return 1;
}
else return fatorial(n)/fatorial(k)/fatorial(n-k);

 }                            

int main (){
int res , k ,n ;
printf("informe o valor de n:");
scanf("%i",&n);
printf("informe o valor de k:");
scanf("%i",&k );
 res = binomial(n,k);
    printf("x = %i", res);


return 0;
}