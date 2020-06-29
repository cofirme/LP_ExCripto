#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

	int i=0, x;
	char str[10000];

	printf("Digite o Texto a ser Criptografado: \n");
	scanf(" %[^\n]s\n", str);

	while(i < str){

		int j=0;

		x = strlen(str);                //conta o tamanho da string

		while(j < x){                       //realiza o deslocamento em 3 posiçoes da tabela ASCII

			if(str[j] >= 'a' && str[j] <= 'z'){
				str[j] = str[j] + 3;
			}else if(str[j] >= 'A' && str[j] <= 'Z'){
				str[j] = str[j] + 3;
			}
            j++;
		}

		printf("\nPasso 1: \n");
		printf("%s\n",str);

		for(int m=0; m<x/2; m++){           // realiza a inversao do texto
			char c = str[m];
			str[m] = str[x-1-m];
			str[x-1-m] = c;
		}

		printf("\nPasso 2: \n");
		printf("%s\n", str);

		for(int a = x/2; a<x; a++){        //realiza o deslocamento de uma posição na tabela ASCII
			str[a] -= 1;                    //da metade em diante
		}

		printf("\nPasso 3: \n");
		printf("%s\n", str);

        printf("\n\nPressione Qualquer Tecla Para Sair!!");
        getch();
        exit(0);
	}
   return 0;
}
