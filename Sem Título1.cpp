
#include<stdio.h>//arquivo cabeçalho que me contem a biblioteca das funçoes
                //STD:STANDAR IO: IN AND OUT
#include<math.h>
#include<stdlib.h>//arquivo de biblioteca if
#include <dos.h>




int main (void) {
    int a;
    int cont;
    int b;
    int c, d;
	do{

    printf("vc que hackear a nasa ? 1 para sim ou 2 para nao\n");
    scanf(" %d",&a);
    printf("voce nao pode negar\n");
    
	}while(a != 1);
		
	
    while (a == 1 && cont < 10000) {
        printf("0101010101011000101001001010100101010101010101010101011100000110101010100010100101011100010101");
        cont = cont+1;
	}
    printf("\n\nVoce hackeou a nasa, O quer voce quer fazer agora ?\n\n");
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
		
		printf("\n\nElon Musk e uma loli 2d de anime nao confie nele\n\n");
		printf("1-assistir algo com Elon musk\n");
		printf("2-continuar mandado dados para Elon Musk\n");
		printf("3-Denunciar Elon Musk\n\n");
		printf("Elon Musk Connected \nElon Musk: Hi my friend\n\n");
		scanf("%d",&c);
		
		if(c == 1){
			printf("Elon Musk: Sorry, but i do not have any time to watch something right now,\n but i recommend a good a anime, maybe the best i've ever watch in my life,\n i'll send to you, i put in portuguese\n\n ");
			system("start https://animezeira.com/fullmetal-alchemist-brotherhood/");
			system("pause");
		}else
		if(c == 2){
			printf("FBI connected\n");
			system("pause");
			printf("Elon Musk: Holy shit ...\n");
			printf("Elon Musk disconnected\n");
			system("pause");
			printf("FBI: we are the (Just read our username)\n ");
			system("pause");
			printf("FBI: We are watching you on Netflix, keep doing what you were doing before\n\n");
			printf("O que vc vai fazer ?\n\n");
			printf("1-sair correndo\n");
			printf("2-suicidio \n");
			printf("3-entregar Elon Musk\n\n");
			scanf("%d",&d);
			
			if(d == 1){
				printf("voce correu\n\n");
			}else
			if(d == 2){
				printf("voce morreu seu bosta\n\n");
				
			}else
			if(d == 3){
				
				printf("FBI: what ?? did you hack NASA ?\n\n ");
				system("pause");
				printf("FBI: hahahahaha\n\n");
				system("pause");
				printf("FBI: you did not\n\n");
				system("pause");
				printf("FBI: You hacked Puppies pet shop\n\n");
				system("pause");
				printf("FBI: we dont care about you did\n\n");
				system("pause");
				printf("FBI: we just test the netflix\n\n");
				system("pause");
				
			}
			
			
		}else
		if(c == 3){
			printf("Elon Musk: now u cant stop\n");
			system("pause");
			printf("\n\nElon Musk:now i got the the cutest puppies that have ever been in this world\n");
			system("pause");
			printf("\n\nElon Musk: did u forget ? im a fucking loli\n");
			
		}
		
		
		
		
	}else
	if(b == 3){
		printf("\nvoce iniciou a terceira guerra mundial\n\n recomendamos que voce fuja\n");
		printf("suas opcoes sao\n\n 1 - procurar bunkers a venda\n\n 2 - procurar bunkers publicos\n\n 3 - sentar e chorar\n\n 4 - se alistar para sobreviver\n");
		scanf(" %d",&c);
		
		if(c == 1){
			printf("\n O mais barato custa 25 milhoes \nviver foi bom\n\n");
			system("pause");
					}
		if (c == 2){
			
			printf("\nlamento mais no Brasil nao tem abrigos publicos \nviver foi bom\n\n");
			system("pause");
		}
		if (c == 3){
			printf("Sua vida foi uma merda\n\n");
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
