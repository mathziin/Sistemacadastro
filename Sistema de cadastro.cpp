#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 200	
	char nome[SIZE][50];
	int cpf[SIZE];
	char email[SIZE][50];
	char cargo[SIZE][50];
	int idade[SIZE];
	int op;
	void cadastro();
	void pesquisa();
	void lista();
	
	int main (void){
		system("color 3f"); // Cor de fundo
		do{
			system("cls");
			printf("\n ------- MENU -------\n1 - Cadastrar\n2 - Listar todos\n3 - Pesquisar\n4 - Sair \n\nDigite a opcao: ");
			scanf("%d", &op);
			switch(op){
				case 1:
			        cadastro();
			    	break;	
				case 2:
			        lista();
				    break;
				case 3:
			        pesquisa();
			    	break;
				case 4:
			        system("exit");
			        break;
			    	default:
			    		printf("opção invalida");
			    		getchar();
			}
			
		}while(op!=4);
	} // Fim do MENU
	
	
	void lista(){
		int i;
		for(i=0; i<SIZE;i++){
		        if(cpf[i]>0){
			printf("\nNome: %s\nCpf: %d\nEmail: %s\nCargo: %s\n Idade: %d", nome[i], cpf[i], email[i], cargo[i], idade[i]);
           	}else{
           		break;
           	
		}
	}
	
	getchar();
	getchar();
	
}
	void cadastro(){
		static int linha;
		do{	
		system("cls");
		printf("\nDigite o nome: ");
		scanf("%s", &nome [linha]);
		printf("\nDigite o cpf:");
		scanf("%d", &cpf [linha]);
		printf("\nDigite o e-mail: ");
		scanf("%s", &email [linha]);
		printf("\nDigite o cargo: ");
		scanf("%s", &cargo [linha]);
		printf("\nDigite a idade: ");
		scanf("%d", &idade [linha]);
		printf("\nDigite 1 para continuar ou outro valor para sair ");
		scanf("%d", &op);
		linha++;
		
	}while(op==1);
	
} //Fim da função cadastro

void pesquisa (){
	int cpfPesquisa;
	char emailPesquisa[50];
	int i;
	do{
		printf("\nDigite 1 para pesquisar por CPF: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				
				printf("\nDigite o CPF: ");
				scanf("%d", &cpfPesquisa);
				for (i=0; i<SIZE;i++){
					if(cpf[i]==cpfPesquisa){
					printf("\nNome: %s\nCpf: %d\nEmail: %s\nCargo: %s\n Idade: %d", nome[i], cpf[i], email[i], cargo[i], idade[i]);
						
				}
			}
			break;
		default:
				printf("\n Opcao invalida");
				break;
		}
		printf("\nDigite 1 para continuar pesquisando: ");
		scanf("%d", &op);
	}while(op==1);
} // Fim da PESQUISA
	
	
