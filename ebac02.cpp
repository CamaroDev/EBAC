#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região 

int main ()
    {
	int opcao=0; //Definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	    system("cls");
	
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem 

	    printf("### Cartório da EBAC ###\n\n"); //inicio do menu

	    printf("Escolha a opção desejada do menu:\n\n");

	    printf("\t1- Registrar Nomes\n");

	    printf("\t2- Consultar Nomes\n");

	    printf("\t3- Deletar Nomes\n\n"); 
  	    printf("Opção: ");//fim do menu
	
	    scanf("%d", &opcao); //armazenando a escolha do usuário
	
	    system("cls");
	    
	    
	    switch(opcao)
	    {
	        case 1:
	    	printf("Você escolheu o registro de nome!\n");
		    system("pause");
		    break;
		      
		    case 2:
		    printf("Você escolheu consultar os nomes!\n");
		    system("pause");
		    break;
		    
		    case 3:
		    printf("Voce escolheu deletar nomes!\n");
		    system("pause");
		    break;
		       
		    default:
		    printf("Essa opção não esta disponivel\n");
		    system("pause");
		    break;
	         	          	
	 	        	
	    }
	
	 
	}	
