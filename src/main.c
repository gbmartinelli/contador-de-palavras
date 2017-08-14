/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char c[200];
  int i,num_p=0,tam;
  
  fgets(c, 200, stdin); 
  tam = strlen(c);
  	
  for(i=0;i<=tam;i++) {

  	if((c[i+1] <= 47) || ((c[i+1] >= 58) && (c[i+1] <= 64)) || ((c[i+1] >= 91) && (c[i+1] <= 96)) || (c[i+1] >= 123)) { 
  		
		if((c[i] >= 'a') && (c[i] <= 'z')) {
			num_p++;
		}
		if((c[i] >= 'A') && (c[i] <= 'Z')) {
			num_p++;
		}
	}

	if((c[i+1] <= 43) || (c[i+1] == 45) || (c[i+1] == 47) || ((c[i+1] >= 58) && (c[i+1] <= 64)) || ((c[i+1] >= 91) && (c[i+1] <= 96)) || (c[i+1] >= 123)) {
		if((c[i] >= '0') && (c[i] <= '9')) {
			num_p++;			
 		}
  	}

	if((c[i] >= '0') && (c[i] <= '9')) {
		if (c[i+1] == ',') {
			if (c[i+2] == ' ') {
				num_p++;
			}
		}
	}

	if((c[i] >= '0') && (c[i] <= '9')) {
		if (c[i+1] == '.') {
			if (c[i+2] == ' ') {
				num_p++;
			}
		}
	}

	if((c[i] >= '0') && (c[i] <= '9')) {
		if (c[i+1] == '.') {
			if (((c[i+2] >= 'A') && (c[i+2] <= 'Z')) || ((c[i+2] >= 'a') && (c[i+2] <= 'z'))) {
				num_p++;
			}
		}
	}
	
  }

  printf("%d\n", num_p);
  return 0;
}
