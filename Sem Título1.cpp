
#include<stdio.h>//arquivo cabeçalho que me contem a biblioteca das funçoes
                //STD:STANDAR IO: IN AND OUT
#include<math.h>
#include<stdlib.h>//arquivo de biblioteca if



int main (void) {
    int a;
    int cont;
    int b;
    int c;
	do{

    printf("vc que hackear a nasa ? 1 para sim ou 2 para nao\n");
    scanf(" %d",&a);
    printf("voce nao pode negar\n");
    
	}while(a != 1);
		
	
    while (a == 1 && cont < 10000) {
        printf("0101010101011000101001001010100101010101010101010101011100000110101010100010100101011100010101");
        cont = cont+1;
	}
    printf("\nVoce hackeou a nasa, O quer voce quer fazer agora ?\n");
    printf("1 - ir pra marte\n");
    printf("2 - manda dados para Elon Musk\n");
    printf("3 - jogar um foguete na russia\n");
    scanf("%d",&b);


    if (b == 1){
    	int cont2 = 0;
		while(cont2 < 10){
				printf("O foguete explodi \nvc morreu \ntodo mundo morreu \n");
				cont2 = cont2+1;
		}
	printf("escolha um o dia do seu enterro\n");
	printf("pera, kkkkkkk vc morreu\n");
	system("pause");
	
	}else
	if (b == 2){
		
		printf("Elon Musk e repitiliano nao confie nele\n");
		system("pause");
	}else
	if(b == 3){
		printf("\nvoce iniciou a terceira guerra mundial\n\n recomendamos que voce fuja\n");
		printf("suas opcoes sao\n\n 1 - procurar bunkers a venda\n\n 2 - procurar bunkers publicos\n\n 3 - sentar e chorar\n\n 4 - se alistar para sobreviver\n");
		scanf(" %d",&c);
		
		if(c == 1){
			printf("\n O mais barato custa 25 milhoes \nviver foi bom");
			system("pause");
					}
		if (c == 2){
			
			printf("\nlamento mais no Brasil nao tem abrigos publicos \nviver foi bom");
			system("pause");
		}
		if (c == 3){
			printf("Sua vida foi uma merda");
			system("pause");
		}
		if (c == 4){
			printf("voce escolheu servi a patria \n");
			system("start https://www.alistamento.eb.mil.br");
			system("pause");
		}
		
	}

   return(0);

}


