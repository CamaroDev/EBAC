#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 

int main ()
    {
	int opcao=0; //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	    system("cls");
	
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem 

	    printf("### Cart�rio da EBAC ###\n\n"); //inicio do menu

	    printf("Escolha a op��o desejada do menu:\n\n");

	    printf("\t1- Registrar Nomes\n");

	    printf("\t2- Consultar Nomes\n");

	    printf("\t3- Deletar Nomes\n\n"); 
  	    printf("Op��o: ");//fim do menu
	
	    scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
	    system("cls");
	    
	    
	    switch(opcao)
	    {
	        case 1:
	    	printf("Voc� escolheu o registro de nome!\n");
		    system("pause");
		    break;
		      
		    case 2:
		    printf("Voc� escolheu consultar os nomes!\n");
		    system("pause");
		    break;
		    
		    case 3:
		    printf("Voce escolheu deletar nomes!\n");
		    system("pause");
		    break;
		       
		    default:
		    printf("Essa op��o n�o esta disponivel\n");
		    system("pause");
		    break;
	         	          	
	 	        	
	    }
	
	 
	}	
