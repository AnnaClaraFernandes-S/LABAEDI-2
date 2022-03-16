#include <stdio.h>
#include <stdlib.h>

int fatorialcauda(int n, int fat) {
  if(n== 0)
		return fat;
	return fatorialcauda(n-1, fat * n); 
}

int fatorialcomcauda(int n)
{
	return fatorialcauda(n, 1);
}

int main()
{
	int re;
    re = fatorialcomcauda(5);
	printf("o resultado da funcao fatorial com cauda: %d \n", re);
	return 0;
}
 